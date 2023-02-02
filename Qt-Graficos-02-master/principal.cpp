#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    m_lienzo = QPixmap(500,500);
    this->dibujar(  );
    ui->outCuadro->setPixmap(m_lienzo);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::dibujar()
{
    m_lienzo.fill(Qt::white);

    QPainter painter(&m_lienzo);

    int x = 30;

    int g1=m_v1*4;
    int g2=m_v2*4;
    int g3=m_v3*4;
    int promedio=((g1+g2+g3)/3);

    QColor cRellenoBarra(916, 920, 915);
    QColor cBordeBarra(1, 1, 1);

    QColor cRellenoBarra2(753, 743, 115);
    QColor cBordeBarra2(29, 113, 112);

    QColor cRellenoBarra3(555, 523, 500);
    QColor cBordeBarra3(158, 16, 100);

    // Crear un pincel para los bordes
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(cBordeBarra);
    pincel.setJoinStyle(Qt::MiterJoin);

    painter.setPen(pincel);
    pincel.setBrush(cRellenoBarra);
    // Dibujar primera barra
    painter.drawRect(x+50,(450-g1),100,g1);

    pincel.setColor(cBordeBarra2);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra2);

    // Dibujar segunda barra
    painter.drawRect(x+170, (450-g2), 100, g2);

    pincel.setColor(cBordeBarra3);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra3);

    // Dibujar tercera barra
    painter.drawRect(x+290,(450-g3),100,g3);

    pincel.setColor(Qt::black);
    pincel.setWidth(2);
    painter.setPen(pincel);

    //Dibujar linea de promedio
    painter.drawLine(x+50, (450-promedio), x+390, (450-promedio));
}

void Principal::on_actionGuardar_triggered()
{
    QString nombreArchivo = QFileDialog::getSaveFileName(
                this,"Guardar imagen",QString(),"Imagenes (*.png)");
    if (!nombreArchivo.isEmpty()){
        if (m_lienzo.save(nombreArchivo))
            QMessageBox::information(this,"Guardar imagen","Archivo guardado en: " + nombreArchivo);
        else
            QMessageBox::warning(this,"Guardar imagen","No se pudo guardar el archivo");
    }
}

void Principal::on_nota1_valueChanged(int argv)
{
    m_v1 = argv;
    dibujar();
    ui->outCuadro->setPixmap(m_lienzo);
}


void Principal::on_nota2_valueChanged(int argv)
{
    m_v2 = argv;
    dibujar();
    ui->outCuadro->setPixmap(m_lienzo);
}


void Principal::on_nota3_valueChanged(int argv)
{
     m_v3 = argv;
    dibujar();
    ui->outCuadro->setPixmap(m_lienzo);
}

