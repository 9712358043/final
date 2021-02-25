TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    box.cpp \
        main.cpp \
    grid.cpp \
    bead.cpp \
    minibox.cpp \
    normalbox.cpp \
    xbox.cpp

HEADERS += \
        box.h \
        grid.h \
        bead.h \
        minibox.h \
        normalbox.h \
        xbox.h

unix|win32: LIBS += -LC:/sfml/lib -lsfml-system -lsfml-graphics -lsfml-window


INCLUDEPATH += C:/sfml/include
DEPENDPATH += C:/sfml/include



