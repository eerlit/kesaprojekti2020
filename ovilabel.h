#ifndef OVILABEL_H
#define OVILABEL_H
#include <QWidget>
#include <QLabel>
// luodaan oman luokka, joka periytyy QLabel:sta
class oviLabel : public QLabel
{
 Q_OBJECT
public:
 oviLabel( const QString & text, QWidget * parent );
 ~oviLabel(){}

// signaali joka lähetetään kun hiirtä on klikattu labelin alueen sisällä

signals:
void clicked();
// QWidgetiltä peritty funktio joka täytyy nyt ylikirjoittaa
protected:
 void mousePressEvent ( QMouseEvent * event ) ;
};


#endif // OVILABEL_H
