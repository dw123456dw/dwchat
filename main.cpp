#include "mainwindow.h"
#include <QApplication>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");

    if(qss.open(QFile::ReadOnly))
    {
        qDebug("打开成功");
        QString style = QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }
    else
    {
        qDebug("打开失败");
    }




    MainWindow w;
    w.show();

    return a.exec();
}
