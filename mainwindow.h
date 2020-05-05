#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include <Qdebug>
#include <qtimer.h>
#include <ovilabel.h>
#include <QtMultimedia/QtMultimedia>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
   void nayttopaivitys(QString);





private slots:
   int haeAika();
    void paivitaAjastin();
    void on_nappi_valueChanged(int value);
    void paivitaNaytto(QString aika);
    void on_Start_clicked();
    void on_stopReset_clicked();
    void oveaKlikattu();
    void on_Avaa_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *ajastin;
    oviLabel *oviKuva;
    QMediaPlayer *player;
    int sekkari = 0;
    int luku= 0;
    bool oviTila = true;
    int oviCounter = 0;

};

#endif // MAINWINDOW_H
