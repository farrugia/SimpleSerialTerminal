#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

namespace Ui {
class MainWindow;
}

class Console;
class SettingsDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots :
    void openSerialPort();
    void closeSerialPort();
    void appendBuffer(const QByteArray &data);
    void readData();

    void handleError(QSerialPort::SerialPortError error);

private :
    void initActionsConnections();

private :
    Ui::MainWindow *ui;
    Console *console;
    SettingsDialog *settings;
    QByteArray *buffer;
    QSerialPort *serial;
};

#endif // MAINWINDOW_H
