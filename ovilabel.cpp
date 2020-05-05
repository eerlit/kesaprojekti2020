#include "ovilabel.h"

oviLabel::oviLabel(const QString &text, QWidget * parent ) :
 QLabel(parent)
{
}
void oviLabel::mousePressEvent ( QMouseEvent * event )
{
 // lähetetään clicked() signaali kun hiiren nappia on painettu
 emit clicked();
}
