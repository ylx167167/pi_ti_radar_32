QT += core gui widgets network
QT += widgets
QT += printsupport
CONFIG   += console
CONFIG   += c++11

#LIBS += -lOpenGL32
#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET =pi_ti_radar_32
TEMPLATE = app
#QMAKE_LFLAGS += -shared

DESTDIR     = ../App


SOURCES +=main.cpp\
    flowlayout/flowlayout.cpp \
    maincontent/controltabwidget.cpp \
    maincontent/controltreewidget.cpp \
    maincontent/controlwidget/bannacontrol/bannacontrol.cpp \
    maincontent/controlwidget/bannacontrol/bannawidget.cpp \
    maincontent/controlwidget/cylindercontrol/cylindercontrol.cpp \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.cpp \
    maincontent/controlwidget/framecontrol/framecontrol.cpp \
    maincontent/controlwidget/framecontrol/framewidget.cpp \
    maincontent/controlwidget/listcontrol/listcontrol.cpp \
    maincontent/controlwidget/listcontrol/listwidget.cpp \
    maincontent/controlwidget/movecontrol/movecontrol.cpp \
    maincontent/controlwidget/movecontrol/movewidget.cpp \
    maincontent/controlwidget/openglcontrol/cameralibrary.cpp \
    maincontent/controlwidget/openglcontrol/objectfactory.cpp \
    maincontent/controlwidget/openglcontrol/objectmodel/objectcube.cpp \
    maincontent/controlwidget/openglcontrol/objectmodel/objectparent.cpp \
    maincontent/controlwidget/openglcontrol/openglcontrol.cpp \
    maincontent/controlwidget/openglcontrol/openglwidget.cpp \
    maincontent/controlwidget/openglcontrol/shaderlibrary.cpp \
    maincontent/controlwidget/openglcontrol/texturelibrary.cpp \
    maincontent/controlwidget/plotcontrol/plotcontrol.cpp \
    maincontent/controlwidget/plotcontrol/plotwidget.cpp \
    maincontent/controlwidget/processcontrol/processcontrol.cpp \
    maincontent/controlwidget/processcontrol/processwidget.cpp \
    maincontent/controlwidget/progresscontrol/progresscontrol.cpp \
    maincontent/controlwidget/progresscontrol/progresswidget.cpp \
    maincontent/controlwidget/slidercontrol/slidercontrol.cpp \
    maincontent/controlwidget/slidercontrol/sliderwidget.cpp \
    maincontent/controlwidget/tablecontrol/tablecontrol.cpp \
    maincontent/controlwidget/tablecontrol/tablewidget.cpp \
    mainwindow.cpp \
    numberanimation/numberanimation.cpp \
    qcustomplot/qcustomplot.cpp \
    screen/mainobject.cpp \
    screen/splashscreen.cpp \
    systemtray/systemtray.cpp \
    titlebar/maintitlebar.cpp \
    titlebar/titlebar.cpp

FORMS += \
    maincontent/controltabwidget.ui \
    maincontent/controltreewidget.ui \
    maincontent/controlwidget/bannacontrol/bannacontrol.ui \
    maincontent/controlwidget/bannacontrol/bannawidget.ui \
    maincontent/controlwidget/cylindercontrol/cylindercontrol.ui \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.ui \
    maincontent/controlwidget/framecontrol/framewidget.ui \
    maincontent/controlwidget/listcontrol/listcontrol.ui \
    maincontent/controlwidget/listcontrol/listwidget.ui \
    maincontent/controlwidget/movecontrol/movecontrol.ui \
    maincontent/controlwidget/movecontrol/movewidget.ui \
    maincontent/controlwidget/openglcontrol/openglwidget.ui \
    maincontent/controlwidget/plotcontrol/plotcontrol.ui \
    maincontent/controlwidget/plotcontrol/plotwidget.ui \
    maincontent/controlwidget/processcontrol/processcontrol.ui \
    maincontent/controlwidget/processcontrol/processwidget.ui \
    maincontent/controlwidget/progresscontrol/progresscontrol.ui \
    maincontent/controlwidget/progresscontrol/progresswidget.ui \
    maincontent/controlwidget/slidercontrol/slidercontrol.ui \
    maincontent/controlwidget/slidercontrol/sliderwidget.ui \
    maincontent/controlwidget/tablecontrol/tablecontrol.ui \
    maincontent/controlwidget/tablecontrol/tablewidget.ui \
    mainwindow.ui \
    titlebar/maintitlebar.ui

HEADERS += \
    flowlayout/flowlayout.h \
    globaldef.hpp \
    maincontent/controltabwidget.h \
    maincontent/controltreewidget.h \
    maincontent/controlwidget/bannacontrol/bannacontrol.h \
    maincontent/controlwidget/bannacontrol/bannawidget.h \
    maincontent/controlwidget/cylindercontrol/cylindercontrol.h \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.h \
    maincontent/controlwidget/framecontrol/framecontrol.h \
    maincontent/controlwidget/framecontrol/framewidget.h \
    maincontent/controlwidget/listcontrol/listcontrol.h \
    maincontent/controlwidget/listcontrol/listwidget.h \
    maincontent/controlwidget/movecontrol/movecontrol.h \
    maincontent/controlwidget/movecontrol/movewidget.h \
    maincontent/controlwidget/openglcontrol/cameralibrary.h \
    maincontent/controlwidget/openglcontrol/objectfactory.h \
    maincontent/controlwidget/openglcontrol/objectmodel/objectcube.h \
    maincontent/controlwidget/openglcontrol/objectmodel/objectparent.h \
    maincontent/controlwidget/openglcontrol/openglcontrol.h \
    maincontent/controlwidget/openglcontrol/opengldef.h \
    maincontent/controlwidget/openglcontrol/openglwidget.h \
    maincontent/controlwidget/openglcontrol/shaderlibrary.h \
    maincontent/controlwidget/openglcontrol/texturelibrary.h \
    maincontent/controlwidget/plotcontrol/plotcontrol.h \
    maincontent/controlwidget/plotcontrol/plotwidget.h \
    maincontent/controlwidget/processcontrol/processcontrol.h \
    maincontent/controlwidget/processcontrol/processwidget.h \
    maincontent/controlwidget/progresscontrol/progresscontrol.h \
    maincontent/controlwidget/progresscontrol/progresswidget.h \
    maincontent/controlwidget/slidercontrol/slidercontrol.h \
    maincontent/controlwidget/slidercontrol/sliderwidget.h \
    maincontent/controlwidget/tablecontrol/tablecontrol.h \
    maincontent/controlwidget/tablecontrol/tablewidget.h \
    mainwindow.h \
    numberanimation/numberanimation.h \
    qcustomplot/qcustomplot.h \
    screen/mainobject.h \
    screen/splashscreen.h \
    systemtray/systemtray.h \
    titlebar/maintitlebar.h \
    titlebar/titlebar.h

RESOURCES += \
    res.qrc \
    res/shaders.qrc \
    res/textures.qrc

