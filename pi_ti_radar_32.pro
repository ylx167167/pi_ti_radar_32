QT += core gui widgets network
QT += core serialport
QT += widgets
QT += printsupport
#QT+=opengl
CONFIG   += console
CONFIG   += c++11
LIBS += -lOpenGL32
#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET =pi_ti_radar_32
TEMPLATE = app
#QMAKE_LFLAGS += -shared

MOC_DIR = $$OUT_PWD/mocfile
OBJECTS_DIR = $$OUT_PWD/objfile
#UI_DIR = $$OUT_PWD/uifile
UI_DIR = $$OUT_PWD
RCC_DIR = $$OUT_PWD/rcfile

DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += QCUSTOMPLOT_USE_OPENGL


SOURCES +=main.cpp\
    dialogsetting/dialogsettings.cpp \
    flowlayout/flowlayout.cpp \
    login/login.cpp \
    maincontent/controltabwidget.cpp \
    maincontent/controltreewidget.cpp \
    maincontent/controlwidget/bannacontrol/bannacontrol.cpp \
    maincontent/controlwidget/bannacontrol/bannawidget.cpp \
    maincontent/controlwidget/openglcontrol/cameralibrary.cpp \
    maincontent/controlwidget/openglcontrol/objectfactory.cpp \
    maincontent/controlwidget/openglcontrol/objectmodel/objectcube.cpp \
    maincontent/controlwidget/openglcontrol/objectmodel/objectparent.cpp \
    maincontent/controlwidget/openglcontrol/openglcontrol.cpp \
    maincontent/controlwidget/openglcontrol/openglwidget.cpp \
    maincontent/controlwidget/openglcontrol/shaderlibrary.cpp \
    maincontent/controlwidget/openglcontrol/texturelibrary.cpp \
    maincontent/controlwidget/radarcontrol/radarcontrol.cpp \
    maincontent/controlwidget/tablecontrol/tablecontrol.cpp \
    mainwindow.cpp \
    numberanimation/numberanimation.cpp \
    qcustomplot/qcustomplot.cpp \
    radarconfig.cpp \
    screen/mainobject.cpp \
    screen/splashscreen.cpp \
    systemtray/systemtray.cpp \
    titlebar/maintitlebar.cpp \
    titlebar/titlebar.cpp

FORMS += maincontent/controltabwidget.ui \
    dialogsetting/dialogsettings.ui \
    login/login.ui \
    maincontent/controltreewidget.ui \
    maincontent/controlwidget/bannacontrol/bannacontrol.ui \
    maincontent/controlwidget/bannacontrol/bannawidget.ui \
    maincontent/controlwidget/listcontrol/listwidget.ui \
    maincontent/controlwidget/openglcontrol/openglwidget.ui \
    maincontent/controlwidget/radarcontrol/radarcontrol.ui \
    maincontent/controlwidget/tablecontrol/tablecontrol.ui \
    mainwindow.ui \
    titlebar/maintitlebar.ui

HEADERS += flowlayout/flowlayout.h \
    dialogsetting/dialogsettings.h \
    globaldef.hpp \
    login/login.h \
    maincontent/controltabwidget.h \
    maincontent/controltreewidget.h \
    maincontent/controlwidget/bannacontrol/bannacontrol.h \
    maincontent/controlwidget/bannacontrol/bannawidget.h \
    maincontent/controlwidget/openglcontrol/cameralibrary.h \
    maincontent/controlwidget/openglcontrol/objectfactory.h \
    maincontent/controlwidget/openglcontrol/objectmodel/objectcube.h \
    maincontent/controlwidget/openglcontrol/objectmodel/objectparent.h \
    maincontent/controlwidget/openglcontrol/openglcontrol.h \
    maincontent/controlwidget/openglcontrol/opengldef.h \
    maincontent/controlwidget/openglcontrol/openglwidget.h \
    maincontent/controlwidget/openglcontrol/shaderlibrary.h \
    maincontent/controlwidget/openglcontrol/texturelibrary.h \
    maincontent/controlwidget/radarcontrol/radarcontrol.h \
    maincontent/controlwidget/tablecontrol/tablecontrol.h \
    mainwindow.h \
    numberanimation/numberanimation.h \
    qcustomplot/qcustomplot.h \
    radarconfig.h \
    screen/mainobject.h \
    screen/splashscreen.h \
    systemtray/systemtray.h \
    titlebar/maintitlebar.h \
    titlebar/titlebar.h

RESOURCES += \
    res.qrc \
    res/shaders.qrc \
    res/textures.qrc

DISTFILES += \
    res/image/other/splash.png \
    res/image/other/splash2.jpg \
    res/image/other/splash3.png \
    res/stylesheet/stylesheet.qss
#RC_FILE += myapp.rc
