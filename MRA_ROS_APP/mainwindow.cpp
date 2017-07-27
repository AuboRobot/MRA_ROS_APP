#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <iostream>
#include <QTime>

void Delay_MSec_Suspend(unsigned int msec)
{

    QTime timer = QTime::currentTime();

    QTime nowTimer;
    do{
              nowTimer=QTime::currentTime();
    }while (timer.msecsTo(nowTimer)<=msec);

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    process = NULL;
}

MainWindow::~MainWindow()
{
    if(process != NULL){
        process->write("quit");
        process->kill();
        process->waitForFinished();
        //Delay_MSec_Suspend(5000);
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
        Delay_MSec_Suspend(5000);
        delete process;
        std::cout<<"MainWindow Destructor"<<std::endl;
    }
    delete ui;
}

void MainWindow::on_pb_random_motion_clicked()
{

    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
    std::cout<<"random_motion_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/random_motion.sh";//commandProgram 这个变量是待执行脚本的完整路径
    // QStringList args;
    // args.append(mFileName);
    // process->start(commandProgram,args);//启动执行脚本文件
    process->start(commandProgram);
}

void MainWindow::on_pb_joint_control_clicked()
{
    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
    std::cout<<"joint_control_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/joint_control.sh";
    process->start(commandProgram);
}

void MainWindow::on_pb_rviz_control_clicked()
{
    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
    std::cout<<"rviz_control_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/rviz_control.sh";
    process->start(commandProgram);
}

void MainWindow::on_pb_shutdown_app_clicked()
{
    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
}

void MainWindow::on_pb_endpose_control_clicked()
{
    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
    std::cout<<"end_pose_control_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/end_pose_control.sh";
    process->start(commandProgram);
}

void MainWindow::on_pb_publish_pose_gui_clicked()
{
    std::cout<<"publish_pose_gui_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/publish_pose_gui.sh";
    process->start(commandProgram);
}

void MainWindow::on_pb_circulation_control_clicked()
{
    if(process != NULL)
    {
        process->write("quit");
        process->kill();
        process->waitForFinished();
        process = new QProcess();
        QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/kill_ros.sh";
        process->start(commandProgram);
    }
    std::cout<<"end_pose_control_slot"<<std::endl;
    process = new QProcess();
    QString commandProgram = "/home/mr/ros_ws/mra_ros_ws/MRA_ROS_APP/sh/circulation_control.sh";
    process->start(commandProgram);
}
