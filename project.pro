TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    grid.cpp \
    bead.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/release/ -lsfml-graphics
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/debug/ -lsfml-graphics
else:unix: LIBS += -L$$PWD/../../SFML-2.5.1/lib/ -lsfml-graphics

INCLUDEPATH += $$PWD/../../SFML-2.5.1/include
DEPENDPATH += $$PWD/../../SFML-2.5.1/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/release/ -lsfml-window
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/debug/ -lsfml-window
else:unix: LIBS += -L$$PWD/../../SFML-2.5.1/lib/ -lsfml-window

INCLUDEPATH += $$PWD/../../SFML-2.5.1/include
DEPENDPATH += $$PWD/../../SFML-2.5.1/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/release/ -lsfml-system
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../SFML-2.5.1/lib/debug/ -lsfml-system
else:unix: LIBS += -L$$PWD/../../SFML-2.5.1/lib/ -lsfml-system

INCLUDEPATH += $$PWD/../../SFML-2.5.1/include
DEPENDPATH += $$PWD/../../SFML-2.5.1/include

HEADERS += \
    grid.h \
    bead.h
