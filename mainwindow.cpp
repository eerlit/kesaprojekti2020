#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ovi olion luonti
    oviKuva = new oviLabel("", this);

    //ääni olion luonti ja volyymin asetus
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("c:/users/Eerik/desktop/cpp/mikro/mikoMateriaali/mikro.mp3"));
    player->setVolume(50);

    //kuvan asettaminen, ja sijoittelu
    const QPixmap
            ovi_kiinni_kuva("c:/users/Eerik/desktop/cpp/mikro/mikoMateriaali/mikrokiinni.jpg");
    oviKuva->setPixmap(ovi_kiinni_kuva);
    oviKuva->resize(1000,500);
    oviKuva->move(0,20);
    const QPixmap skaalattu_kuva =
            ovi_kiinni_kuva.scaled(oviKuva->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);


    //kello
    ajastin = new QTimer(this);
    this->connect(this, SIGNAL(nayttopaivitys(QString)),this, SLOT(paivitaNaytto(QString)));
    this->connect(ajastin, SIGNAL(timeout()), this, SLOT(paivitaAjastin()));
    this->connect(oviKuva, SIGNAL(clicked()), this, SLOT(oveaKlikattu()));



}

MainWindow::~MainWindow()
{
    delete ui;
    delete ajastin;
    delete oviKuva;
    delete player;
}

void MainWindow::on_nappi_valueChanged(int value)
{
    sekkari = value;
    QString text = QString::number(value);

    emit nayttopaivitys(text);

}
void MainWindow::paivitaNaytto(QString aika)
{
    ui->ajastinNaytto->display(aika);
}



void MainWindow::on_Start_clicked()
{
    if(oviTila == true)
    {
    ajastin->setInterval(1000);
    ajastin->start();

}


}


void MainWindow::paivitaAjastin()
{
    --sekkari;
    ui->ajastinNaytto->display(sekkari);

    if(oviTila == false)
    {
        ajastin->stop();
    }
    if(sekkari == 0)
    {
        player->play();
        ajastin->stop();
    }

}



int MainWindow::haeAika()
{
    int x = ui->ajastinNaytto->value();

    return x;

}

void MainWindow::on_stopReset_clicked()
{
    ajastin->stop();

    luku++;

    if(luku == 2)
    {

        sekkari = 0;
        ui->ajastinNaytto->display(sekkari);
        luku = 0;
    }
}

void MainWindow::on_Avaa_clicked()
{

    const QPixmap
            ovi_auki_kuva("c:/users/Eerik/desktop/cpp/mikro/mikoMateriaali/mikroauki.jpg");
    oviKuva->setPixmap(ovi_auki_kuva);
    oviKuva->resize(1000,500);
    oviKuva->move(0,20);
    const QPixmap skaalattu_kuva =
            ovi_auki_kuva.scaled(oviKuva->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);



}

void MainWindow::oveaKlikattu()
{

    const QPixmap
            ovi_auki_kuva("c:/users/Eerik/desktop/cpp/mikro/mikoMateriaali/mikroauki.jpg");
    oviKuva->setPixmap(ovi_auki_kuva);
    oviKuva->resize(1000,500);
    oviKuva->move(0,20);
    const QPixmap skaalattu_kuva =
            ovi_auki_kuva.scaled(oviKuva->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    oviTila = false;
    oviCounter++;

    if(oviCounter == 2)
    {
        const QPixmap
                ovi_kiinni_kuva("c:/users/Eerik/desktop/cpp/mikro/mikoMateriaali/mikrokiinni.jpg");
        oviKuva->setPixmap(ovi_kiinni_kuva);
        oviKuva->resize(1000,500);
        oviKuva->move(0,20);
        const QPixmap skaalattu_kuva =
                ovi_kiinni_kuva.scaled(oviKuva->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        oviTila = true;
        oviCounter =0;
    }



}
