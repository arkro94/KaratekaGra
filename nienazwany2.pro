TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ckarateka.cpp \
    icobiekt.cpp \
    iccios.cpp \
    cgra.cpp \
    cniebieski.cpp \
    cczerwony.cpp \
    czachowania.cpp \
    cgrafika.cpp \
    celementgrafiki.cpp \
    cbajery.cpp

LIBS += -LC:/Users/Artur/Downloads/SFML-master/build-SFML-master-Desktop_Qt_5_6_2_MinGW_32bit-Default/lib

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

HEADERS += \
    ckarateka.h \
    icobiekt.h \
    iccios.h \
    cgra.h \
    cniebieski.h \
    cczerwony.h \
    czachowania.h \
    cgrafika.h \
    celementgrafiki.h \
    cbajery.h
