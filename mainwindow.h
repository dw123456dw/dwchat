#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "logindialog.h"
#include <QMainWindow>
#include "registerdialog.h"

/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      主窗口
 *
 * @author     唐吉可德
 * @date       2024/07/31
 * @history
 *****************************************************************************/


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void SlotSwitchReg();



private:
    Ui::MainWindow *ui;
    LoginDialog *_login_dlg;
    RegisterDialog *_reg_dlg;
};

#endif // MAINWINDOW_H
