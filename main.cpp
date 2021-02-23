#include "mainwindow.h"
#include "screen/mainobject.h"
#include "stdio.h"
#include <QApplication>
#include <globaldef.hpp>
#include <iostream>
#include <login/login.h>
#include <radarconfig.h>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  login w;
  w.show();
  if(w.exec()==QDialog::Accepted)
  {
      MainObject mainObject;
      mainObject.setInit();
      LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);
      return a.exec();
  }
  else
      return 0;

}
