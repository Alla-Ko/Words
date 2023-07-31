
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QString>
#include <QTableView>
#include <QList>
#include <QFile>
#include <QStandardPaths>
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include "mytablemodel.h"
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Open_file();
/*
    inline static QString fileName =
        QStandardPaths::standardLocations(QStandardPaths::DesktopLocation).value(0)
        + QStringLiteral("/text.dat");
*/
private slots:
    void on_radioButton_medium_clicked();

    void on_radioButton_easy_clicked();

    void on_radioButton_hard_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();
    bool iswin();
    void hearts();

    void on_pushButton_2_clicked();
    void mybutton(QString l, int butt);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_radioButton_sound_on_clicked();

    void on_radioButton_sound_off_clicked();

    void on_action_3_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    QSortFilterProxyModel *proxyModel;
    myTableModel *myModel;
    QList <QString> words;
    QList <QChar> char_word;
    QString myword;
    QPushButton* buttons[34];
    int life;
    QMediaPlayer* player;
    QAudioOutput *audioOutput;


};

#endif // MAINWINDOW_H
