#include "mainwindow.h"
#include "screen/mainobject.h"
#include "stdio.h"
#include <QApplication>
#include <globaldef.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainObject mainObject;
  mainObject.setInit();
  LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);

  return a.exec();
  //    printf("haha");
  //    return 0;
}
