#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QProcess *process;

private slots:
    void on_pb_random_motion_clicked();

    void on_pb_joint_control_clicked();

    void on_pb_rviz_control_clicked();

    void on_pb_shutdown_app_clicked();

    void on_pb_endpose_control_clicked();

    void on_pb_publish_pose_gui_clicked();

    void on_pb_circulation_control_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
