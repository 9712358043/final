#include "grid.h"

using namespace sf;
int main()
{
      VideoMode vm(1920,1080);
      RenderWindow*  window = new RenderWindow(vm,"snakes");
      grid  mygrid;
      Texture txtbg;
      txtbg.loadFromFile("/home/mohsentaghavi/Desktop/final project/table.jpg");
      Sprite sprbg;
      sprbg.setTexture(txtbg);
      sprbg.setPosition(750,750);
      bool pause=false;
      int movementnum=20;
      Text messagetxt;
      Text scoretxt;
      Font font;
      font.loadFromFile("/home/mohsentaghavi/Desktop/final project/project/fonts");
      messagetxt.setFont(font);
      scoretxt.setFont(font);
      messagetxt.setCharacterSize(70);
      scoretxt.setCharacterSize(30);
      messagetxt.setFillColor(Color :: White);
      scoretxt.setFillColor(Color :: Red);
      FloatRect txtrect=messagetxt.getLocalBounds();
      messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
      messagetxt.setPosition(1920/2.0f,1080/2.0f);
      scoretxt.setPosition(1500,20);
      scoretxt.setString("SCORE= "+std::to_string(mygrid.mainscore));
      ///time bar
      //RectangleShape timebar;
      //float timebarwidth=600;
      //float timebarheight=100;
      //timebar.setSize(Vector2f(timebarwidth,timebarheight));
      //timebar.setFillColor(Color::Magenta);
      //timebar.setPosition(1920/2-timebarwidth/2,980);
      //Time gametime;
      //float timeremain=60.0f;
      //float timeperwidth=timebarwidth/timeremain;
         int click=0;
//           int x1=0;
//           int x2=0;
//           int y1=0;
//           int y2=0;
      Vector2i position1;
      Vector2i position2;
      Vector2i position3;
      bool ischecking=false;
      while (window->isOpen())
      {
              if(Keyboard::isKeyPressed(Keyboard::Space)){
                      pause=!pause;
              }
              if(Keyboard::isKeyPressed(Keyboard::Tab)){
                      mygrid.mainscore=0;
                      mygrid.startgrid();
              }
              if(Keyboard::isKeyPressed(Keyboard::Return)){
                      if(mygrid.returnchecker()){
                          mygrid.startgrid();
                       }
                      else {
                              messagetxt.setString("YOU CAN'T RELOAD THE GAME!!!");
                              txtrect=messagetxt.getLocalBounds();
                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                      }
              }
              if(Keyboard::isKeyPressed(Keyboard::Escape)){
                      window->close();
              }
             if(pause){
                      if(movementnum!=0){
                              messagetxt.setString("GAME IS PAUSED!!!");
                              txtrect=messagetxt.getLocalBounds();
                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                      }
                      else if(mygrid.mainscore>=5000){
                              messagetxt.setString("CONGRATULATION!!!");
                              txtrect=messagetxt.getLocalBounds();
                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                      }
                      else if(movementnum==0&&(mygrid.mainscore<5000)){
                              messagetxt.setString("YOU LOSE  !!!");
                              txtrect=messagetxt.getLocalBounds();
                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                      }
                      window->draw(messagetxt);
              }
              if(!pause&&!ischecking){
                      Event event1;
                      while(window->pollEvent(event1)){
                              if(event1.type==Event::Closed){
                                      window->close();
                              }
                              if(event1.type==Event::MouseButtonPressed){
                                  Vector2i position = Mouse::getPosition();
                                  std::cout << "WTFF \n\n\n\n";
                                      click++;
                                      if(click==1){

                                              for (  int i=1;i<=9;i++) {
                                                    for (  int j=1;j<=9;j++) {
                                                         auto bounds = mygrid.gridArr[i][j].getGlobalBounds();
                                                            if (bounds.contains(static_cast<Vector2f>(position))&&(event1.key.code ==Mouse::isButtonPressed(Mouse::Left))){
                                                                      position1.x=i;
                                                                      position1.y=j;
                                                                      break;
                                                             }
                                                    }
                                              }
                                              if (position1.x == 0)
                                                  click--;
                                        }
                                        if(click==2){
                                                for (  int i=1;i<=9;i++) {
                                                        for (  int j=1;j<=9;j++) {
                                                                if (mygrid.gridArr[i][j].getGlobalBounds().contains(static_cast<Vector2f>(position))&&(event1.key.code ==Mouse::isButtonPressed(Mouse::Left))){
                                                                          position2.x=i;
                                                                          position2.y=j;
                                                                 }
                                                        }
                                                }
                                                if((abs(position1.x-position2.x)+abs(position1.y-position2.y)==1)){
                                                        mygrid.jewelswap2(position1,position2);
                                                        movementnum--;
                                                }
                                        }
                               }
                              if(Keyboard::isKeyPressed(Keyboard::F)){
                                      if(mygrid.forth>0){
                                              mygrid.forth-=1;
                                              Event event2;
                                              for (  int i=1;i<=9;i++) {
                                                      for (  int j=1;j<=9;j++) {
                                                              if (mygrid.gridArr[i][j].getGlobalBounds().contains(static_cast<Vector2f>(Mouse::getPosition()))&&(event2.key.code ==Mouse::isButtonPressed(Mouse::Left))){
                                                                        position3.x=i;
                                                                        position3.y=j;
                                                               }
                                                      }
                                              }
                                              mygrid.forthfunc(position3.x,position3.y);
                                              movementnum--;
                                              position3.x=0;
                                              position3.y=0;
                                      }
                                      else {
                                              messagetxt.setString("you don't have enough forth power!!! ");
                                              txtrect=messagetxt.getLocalBounds();
                                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                                      }
                               }
                              if(Keyboard::isKeyPressed(Keyboard::Q)) {
                                      if(mygrid.fifth>0){
                                              mygrid.fifth--;
                                              Event event3;
                                              for (  int i=1;i<=9;i++) {
                                                      for (  int j=1;j<=9;j++) {
                                                              if (mygrid.gridArr[i][j].getGlobalBounds().contains(static_cast<Vector2f>(Mouse::getPosition()))&&(event3.key.code ==Mouse::isButtonPressed(Mouse::Left))){
                                                                        position3.x=i;
                                                                        position3.y=j;
                                                               }
                                                      }
                                              }
                                              mygrid.fifthfunc(position3.x,position3.y);
                                              movementnum--;
                                              position3.x=0;
                                              position3.y=0;
                                      }
                                      else {
                                              messagetxt.setString("you don't have enough fifth power!!! ");
                                              txtrect=messagetxt.getLocalBounds();
                                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                                      }
                              }
                              if(Keyboard::isKeyPressed(Keyboard::R)) {
                                      if(mygrid.sixth>0){
                                              mygrid.sixth--;
                                              Event event4;
                                              for (  int i=1;i<=9;i++) {
                                                      for (  int j=1;j<=9;j++) {
                                                              if (mygrid.gridArr[i][j].getGlobalBounds().contains(static_cast<Vector2f>(Mouse::getPosition()))&&(event4.key.code ==Mouse::isButtonPressed(Mouse::Left))){
                                                                        position3.x=i;
                                                                        position3.y=j;
                                                               }
                                                      }
                                              }
                                              mygrid.sixthfunc(position3.x,position3.y);
                                              position3.x=0;
                                              position3.y=0;
                                              movementnum--;
                                      }
                                      else {
                                              messagetxt.setString("you don't have enough sixth power!!! ");
                                              txtrect=messagetxt.getLocalBounds();
                                              messagetxt.setOrigin(txtrect.left+txtrect.width/2.0f,txtrect.top+txtrect.height/2.0f);
                                              messagetxt.setPosition(1920/2.0f,1080/2.0f);
                                      }
                              }
                              if(movementnum==0){
                                      pause=true;
                              }
                              //////////////////////////////////////////////////arithmatic logic unit


                      }
                      if(click==2){
                              if(!mygrid.checkforswap()){
                                       mygrid.jewelswap2(position2,position1);
                                       movementnum++;
                              }
                              click=0;
                              position1.x=0;
                              position1.y=0;
                              position2.x=0;
                              position2.y=0;
                      }



              }
              mygrid.checking();
              mygrid.calculatingscore();
              mygrid.deletingjewels();
              ischecking=mygrid.checkforswap();
              scoretxt.setString("SCORE : "+std::to_string(mygrid.mainscore));
              mygrid.mainscore=mygrid.getmainscore();

              //clear eth from last frame
              window->clear();
              //draw our scene
              window->draw(sprbg);
              window->draw(scoretxt);
              mygrid.drawtable();
              mygrid.drawjewels();
              //display our game
              window->display();
      }
      return 0;
}
