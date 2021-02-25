#ifndef class_h
#define class_h

// classes:

class Game
{
    public:
        virtual int Movement();

};

class Box : public Game
{
    public:
        virtual int Movement();
        virtual int GetXPosition();
        virtual int GetYPosition();

};


class Box1 : public Box // white box
{
    private:
        int Move = 3;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }

};

class Box2 : public Box  // dark box
{
    private:
        int Move = 5;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};

class Box3 : public Box
{
    private:
        int Move = 7;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};


class GoldenBox: public Box
{
    private:
        int Move = 1;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};

///////////////////////////////////////

class Snake : public Game
{
    public:
        virtual int Movement();

};

class Viber : public Snake 
{
    private:
        int Move = -5;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};

class python : public Snake 
{
    private:
        int Move = -7;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};

class Cobra : public Snake 
{
    private:
        int Move = -9;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};

class GoldenSnake : public Snake 
{
    private:
        int Move = 0;
        int x_position;
        int y_position;
    public:
        int Movement(){return Move;};
        int GetXPosition()
        {
            return x_position;
        }
        int GetYPosition()
        {
            return y_position;
        }
};


class Player
{
    private:
        int X_Pos;
        int Y_Pos;
    public:
        void X_Set_Pos(int x)
        {
             X_Pos =x;
        }
        void Y_Set_Pos(int y)
        {
            Y_Pos=y;
        }
        int X_Get_Pos()
        {
            return X_Pos;
        }
        int Y_Get_Pos()
        {
            return Y_Pos;
        }
};


#endif // !class_h#define class_h
