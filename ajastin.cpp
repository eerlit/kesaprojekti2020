#include "ajastin.h"

Ajastin::Ajastin()
{

}

void Ajastin::StarttaaAjastin(int ajastus)
{

    qDebug() << ajastus;

        ajastin->start(ajastus);
        if(!(--ajastus)){
            ajastin->setInterval(1000);
        ui->ajastinNaytto->display(ajastus);
    }
}
