TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        car.cpp \
        engine.cpp \
        main.cpp \
        wheel.cpp

HEADERS += \
    car.h \
    engine.h \
    wheel.h

QT += widgets
