/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionGuardar;
    QAction *actionSalir;
    QAction *actionAbrir;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *outCuadro;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *nota1;
    QLabel *label_2;
    QSpinBox *nota2;
    QLabel *label_3;
    QSpinBox *nota3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(682, 601);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/barra-grafica.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        Principal->setStyleSheet(QString::fromUtf8(""));
        actionGuardar = new QAction(Principal);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/disquete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon1);
        actionSalir = new QAction(Principal);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/salida-de-emergencia.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon2);
        actionAbrir = new QAction(Principal);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/archivo-nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon3);
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        outCuadro = new QLabel(centralwidget);
        outCuadro->setObjectName(QString::fromUtf8("outCuadro"));
        outCuadro->setMinimumSize(QSize(500, 500));
        outCuadro->setStyleSheet(QString::fromUtf8(""));
        outCuadro->setFrameShape(QFrame::Box);
        outCuadro->setFrameShadow(QFrame::Sunken);
        outCuadro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(outCuadro);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nota1 = new QSpinBox(groupBox);
        nota1->setObjectName(QString::fromUtf8("nota1"));
        nota1->setMinimum(1);
        nota1->setMaximum(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, nota1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        nota2 = new QSpinBox(groupBox);
        nota2->setObjectName(QString::fromUtf8("nota2"));
        nota2->setMinimum(1);
        nota2->setMaximum(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, nota2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        nota3 = new QSpinBox(groupBox);
        nota3->setObjectName(QString::fromUtf8("nota3"));
        nota3->setMinimum(1);
        nota3->setMaximum(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, nota3);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 682, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);
        toolBar = new QToolBar(Principal);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(Principal);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        Principal->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(Principal);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        Principal->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionSalir);
        toolBar->addAction(actionGuardar);
        toolBar_2->addAction(actionAbrir);

        retranslateUi(Principal);
        QObject::connect(actionSalir, SIGNAL(triggered()), Principal, SLOT(close()));

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Principal", nullptr));
        actionGuardar->setText(QCoreApplication::translate("Principal", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("Principal", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalir->setText(QCoreApplication::translate("Principal", "Salir", nullptr));
#if QT_CONFIG(shortcut)
        actionSalir->setShortcut(QCoreApplication::translate("Principal", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbrir->setText(QCoreApplication::translate("Principal", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("Principal", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        outCuadro->setText(QCoreApplication::translate("Principal", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Principal", "Notas", nullptr));
        label->setText(QCoreApplication::translate("Principal", "Nota 1", nullptr));
        label_2->setText(QCoreApplication::translate("Principal", "Nota 2", nullptr));
        label_3->setText(QCoreApplication::translate("Principal", "Nota 3", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Principal", "Archivo", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Principal", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("Principal", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("Principal", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
