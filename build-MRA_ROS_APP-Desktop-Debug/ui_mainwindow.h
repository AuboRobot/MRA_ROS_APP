/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pb_random_motion;
    QPushButton *pb_joint_control;
    QPushButton *pb_shutdown_app;
    QPushButton *pb_rviz_control;
    QPushButton *pb_endpose_control;
    QPushButton *pb_publish_pose_gui;
    QLabel *label;
    QPushButton *pb_circulation_control;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 337);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pb_random_motion = new QPushButton(centralWidget);
        pb_random_motion->setObjectName(QStringLiteral("pb_random_motion"));
        pb_random_motion->setGeometry(QRect(110, 100, 161, 27));
        pb_joint_control = new QPushButton(centralWidget);
        pb_joint_control->setObjectName(QStringLiteral("pb_joint_control"));
        pb_joint_control->setGeometry(QRect(110, 140, 161, 27));
        pb_shutdown_app = new QPushButton(centralWidget);
        pb_shutdown_app->setObjectName(QStringLiteral("pb_shutdown_app"));
        pb_shutdown_app->setGeometry(QRect(220, 0, 181, 31));
        pb_rviz_control = new QPushButton(centralWidget);
        pb_rviz_control->setObjectName(QStringLiteral("pb_rviz_control"));
        pb_rviz_control->setGeometry(QRect(110, 62, 161, 27));
        pb_endpose_control = new QPushButton(centralWidget);
        pb_endpose_control->setObjectName(QStringLiteral("pb_endpose_control"));
        pb_endpose_control->setGeometry(QRect(60, 180, 121, 27));
        pb_publish_pose_gui = new QPushButton(centralWidget);
        pb_publish_pose_gui->setObjectName(QStringLiteral("pb_publish_pose_gui"));
        pb_publish_pose_gui->setGeometry(QRect(210, 180, 121, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(189, 178, 21, 30));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pb_circulation_control = new QPushButton(centralWidget);
        pb_circulation_control->setObjectName(QStringLiteral("pb_circulation_control"));
        pb_circulation_control->setGeometry(QRect(110, 220, 161, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MRA_ROS_APP", 0));
        pb_random_motion->setText(QApplication::translate("MainWindow", "Random Motion", 0));
        pb_joint_control->setText(QApplication::translate("MainWindow", "joint control", 0));
        pb_shutdown_app->setText(QApplication::translate("MainWindow", "ShutDown Running App", 0));
        pb_rviz_control->setText(QApplication::translate("MainWindow", "Rviz Control MRA7", 0));
        pb_endpose_control->setText(QApplication::translate("MainWindow", "end pose control", 0));
        pb_publish_pose_gui->setText(QApplication::translate("MainWindow", "publish_pose_gui", 0));
        label->setText(QApplication::translate("MainWindow", "+", 0));
        pb_circulation_control->setText(QApplication::translate("MainWindow", "two states circulation", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
