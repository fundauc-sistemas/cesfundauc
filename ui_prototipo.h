/********************************************************************************
** Form generated from reading UI file 'prototipo.ui'
**
** Created: Sun 16. Jun 10:08:12 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTOTIPO_H
#define UI_PROTOTIPO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prototipoClass
{
public:
    QAction *actionImprimir;
    QAction *actionCerrar_Sesion;
    QAction *actionNueva_Factura;
    QAction *actionRegistro_de_Depositos;
    QAction *actionRegistro;
    QAction *actionFicha_Academica;
    QAction *actionFicha_Pago;
    QAction *actionRegistroProf;
    QAction *actionCarga_de_Notas;
    QAction *actionListados;
    QAction *actionCursos_2;
    QAction *actionSecciones;
    QAction *actionHorarios;
    QAction *actionSalones;
    QAction *actionEventos;
    QAction *actionLibros_y_Materiales;
    QAction *actionPrecios;
    QAction *actionCalendarios;
    QAction *actionEstadisticas;
    QAction *actionOtros;
    QAction *actionAcerca_de;
    QAction *actionAcerca_de_Qt;
    QAction *actionSalir;
    QAction *actionAnular_Factura;
    QAction *actionAbrir;
    QAction *actionRegistro_de_Facturas;
    QAction *actionControl_de_Evaluacion;
    QAction *actionValija_de_Ingresos;
    QAction *actionDiplomados;
    QAction *actionCalendarioIdiomas;
    QAction *actionCalendarioCfp;
    QAction *actionCarga_Academica;
    QAction *actionMetodos;
    QAction *actionUsuario;
    QAction *actionRespaldo;
    QAction *actionIdiomas;
    QAction *actionDiplomados_2;
    QAction *actionInicio_de_Curso;
    QAction *actionBeca_Trabajo;
    QAction *actionActo_de_Grado;
    QAction *actionCon_notas;
    QAction *actionSin_notas;
    QAction *actionCon_notas_En_ingles;
    QAction *actionSin_notas_En_ingles;
    QAction *actionSin_notas_2;
    QAction *actionCon_notas_2;
    QAction *actionSin_notas_3;
    QAction *actionCon_notas_3;
    QAction *actionSin_notas_En_ingles_2;
    QAction *actionCon_notas_En_ingles_2;
    QAction *actionProgramas;
    QAction *actionCambio_de_Seccion;
    QAction *actionFusion_de_Secciones;
    QAction *actionRetiro_Suspensi_n;
    QAction *actionTraslado_de_Sede;
    QAction *actionGraduandos;
    QAction *actionCorrelativos;
    QAction *actionCuadre_Diario;
    QAction *actionProfesores;
    QAction *actionSecciones_2;
    QAction *actionCursos;
    QAction *actionPrecios_2;
    QAction *actionAulas;
    QAction *actionAlumnos;
    QAction *actionCedula_de_Ingreso_Mensual;
    QAction *actionCierre_Diario;
    QAction *actionCierre_Mensual;
    QAction *actionCedula_de_Ingresos;
    QAction *actionValija_de_Ingresos_2;
    QAction *actionUsuario_2;
    QAction *actionCompa_ia;
    QAction *actionCambio_de_Usuario;
    QAction *actionSalir_2;
    QAction *actionCaja;
    QAction *actionControl_de_Estudios;
    QAction *actionAdministracion;
    QAction *actionMercadeo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *frame;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuAyuda;
    QMenu *menuMacros;
    QMenu *menuModulos;
    QMenu *menuProcesos;
    QMenu *menuRegistros;
    QMenu *menuReportes;
    QMenu *menuOtros;
    QMenu *menuBasicas;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *prototipoClass)
    {
        if (prototipoClass->objectName().isEmpty())
            prototipoClass->setObjectName(QString::fromUtf8("prototipoClass"));
        prototipoClass->resize(800, 600);
        prototipoClass->setMinimumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans MT"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        prototipoClass->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/esfera48.png"), QSize(), QIcon::Normal, QIcon::Off);
        prototipoClass->setWindowIcon(icon);
        actionImprimir = new QAction(prototipoClass);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(9);
        actionImprimir->setFont(font1);
        actionCerrar_Sesion = new QAction(prototipoClass);
        actionCerrar_Sesion->setObjectName(QString::fromUtf8("actionCerrar_Sesion"));
        actionCerrar_Sesion->setFont(font1);
        actionNueva_Factura = new QAction(prototipoClass);
        actionNueva_Factura->setObjectName(QString::fromUtf8("actionNueva_Factura"));
        actionNueva_Factura->setFont(font1);
        actionRegistro_de_Depositos = new QAction(prototipoClass);
        actionRegistro_de_Depositos->setObjectName(QString::fromUtf8("actionRegistro_de_Depositos"));
        actionRegistro_de_Depositos->setFont(font1);
        actionRegistro = new QAction(prototipoClass);
        actionRegistro->setObjectName(QString::fromUtf8("actionRegistro"));
        actionRegistro->setFont(font1);
        actionFicha_Academica = new QAction(prototipoClass);
        actionFicha_Academica->setObjectName(QString::fromUtf8("actionFicha_Academica"));
        actionFicha_Academica->setFont(font1);
        actionFicha_Pago = new QAction(prototipoClass);
        actionFicha_Pago->setObjectName(QString::fromUtf8("actionFicha_Pago"));
        actionFicha_Pago->setFont(font1);
        actionRegistroProf = new QAction(prototipoClass);
        actionRegistroProf->setObjectName(QString::fromUtf8("actionRegistroProf"));
        QFont font2;
        font2.setPointSize(9);
        actionRegistroProf->setFont(font2);
        actionCarga_de_Notas = new QAction(prototipoClass);
        actionCarga_de_Notas->setObjectName(QString::fromUtf8("actionCarga_de_Notas"));
        actionListados = new QAction(prototipoClass);
        actionListados->setObjectName(QString::fromUtf8("actionListados"));
        actionCursos_2 = new QAction(prototipoClass);
        actionCursos_2->setObjectName(QString::fromUtf8("actionCursos_2"));
        actionSecciones = new QAction(prototipoClass);
        actionSecciones->setObjectName(QString::fromUtf8("actionSecciones"));
        actionSecciones->setFont(font2);
        actionHorarios = new QAction(prototipoClass);
        actionHorarios->setObjectName(QString::fromUtf8("actionHorarios"));
        actionHorarios->setFont(font1);
        actionSalones = new QAction(prototipoClass);
        actionSalones->setObjectName(QString::fromUtf8("actionSalones"));
        actionSalones->setFont(font1);
        actionEventos = new QAction(prototipoClass);
        actionEventos->setObjectName(QString::fromUtf8("actionEventos"));
        actionEventos->setFont(font1);
        actionLibros_y_Materiales = new QAction(prototipoClass);
        actionLibros_y_Materiales->setObjectName(QString::fromUtf8("actionLibros_y_Materiales"));
        actionPrecios = new QAction(prototipoClass);
        actionPrecios->setObjectName(QString::fromUtf8("actionPrecios"));
        actionPrecios->setFont(font1);
        actionCalendarios = new QAction(prototipoClass);
        actionCalendarios->setObjectName(QString::fromUtf8("actionCalendarios"));
        actionCalendarios->setFont(font1);
        actionEstadisticas = new QAction(prototipoClass);
        actionEstadisticas->setObjectName(QString::fromUtf8("actionEstadisticas"));
        actionEstadisticas->setFont(font1);
        actionOtros = new QAction(prototipoClass);
        actionOtros->setObjectName(QString::fromUtf8("actionOtros"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(10);
        actionOtros->setFont(font3);
        actionAcerca_de = new QAction(prototipoClass);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Gill Sans MT"));
        font4.setPointSize(10);
        actionAcerca_de->setFont(font4);
        actionAcerca_de_Qt = new QAction(prototipoClass);
        actionAcerca_de_Qt->setObjectName(QString::fromUtf8("actionAcerca_de_Qt"));
        actionAcerca_de_Qt->setFont(font4);
        actionSalir = new QAction(prototipoClass);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionSalir->setFont(font1);
        actionAnular_Factura = new QAction(prototipoClass);
        actionAnular_Factura->setObjectName(QString::fromUtf8("actionAnular_Factura"));
        actionAbrir = new QAction(prototipoClass);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionRegistro_de_Facturas = new QAction(prototipoClass);
        actionRegistro_de_Facturas->setObjectName(QString::fromUtf8("actionRegistro_de_Facturas"));
        actionRegistro_de_Facturas->setFont(font1);
        actionControl_de_Evaluacion = new QAction(prototipoClass);
        actionControl_de_Evaluacion->setObjectName(QString::fromUtf8("actionControl_de_Evaluacion"));
        actionValija_de_Ingresos = new QAction(prototipoClass);
        actionValija_de_Ingresos->setObjectName(QString::fromUtf8("actionValija_de_Ingresos"));
        actionValija_de_Ingresos->setFont(font3);
        actionDiplomados = new QAction(prototipoClass);
        actionDiplomados->setObjectName(QString::fromUtf8("actionDiplomados"));
        actionDiplomados->setFont(font1);
        actionCalendarioIdiomas = new QAction(prototipoClass);
        actionCalendarioIdiomas->setObjectName(QString::fromUtf8("actionCalendarioIdiomas"));
        actionCalendarioCfp = new QAction(prototipoClass);
        actionCalendarioCfp->setObjectName(QString::fromUtf8("actionCalendarioCfp"));
        actionCalendarioCfp->setFont(font1);
        actionCarga_Academica = new QAction(prototipoClass);
        actionCarga_Academica->setObjectName(QString::fromUtf8("actionCarga_Academica"));
        actionCarga_Academica->setFont(font1);
        actionMetodos = new QAction(prototipoClass);
        actionMetodos->setObjectName(QString::fromUtf8("actionMetodos"));
        actionMetodos->setFont(font1);
        actionUsuario = new QAction(prototipoClass);
        actionUsuario->setObjectName(QString::fromUtf8("actionUsuario"));
        actionUsuario->setFont(font1);
        actionRespaldo = new QAction(prototipoClass);
        actionRespaldo->setObjectName(QString::fromUtf8("actionRespaldo"));
        actionRespaldo->setFont(font1);
        actionIdiomas = new QAction(prototipoClass);
        actionIdiomas->setObjectName(QString::fromUtf8("actionIdiomas"));
        actionIdiomas->setFont(font1);
        actionDiplomados_2 = new QAction(prototipoClass);
        actionDiplomados_2->setObjectName(QString::fromUtf8("actionDiplomados_2"));
        actionDiplomados_2->setFont(font1);
        actionInicio_de_Curso = new QAction(prototipoClass);
        actionInicio_de_Curso->setObjectName(QString::fromUtf8("actionInicio_de_Curso"));
        actionInicio_de_Curso->setFont(font1);
        actionBeca_Trabajo = new QAction(prototipoClass);
        actionBeca_Trabajo->setObjectName(QString::fromUtf8("actionBeca_Trabajo"));
        actionBeca_Trabajo->setFont(font1);
        actionActo_de_Grado = new QAction(prototipoClass);
        actionActo_de_Grado->setObjectName(QString::fromUtf8("actionActo_de_Grado"));
        actionActo_de_Grado->setFont(font1);
        actionCon_notas = new QAction(prototipoClass);
        actionCon_notas->setObjectName(QString::fromUtf8("actionCon_notas"));
        actionCon_notas->setFont(font1);
        actionSin_notas = new QAction(prototipoClass);
        actionSin_notas->setObjectName(QString::fromUtf8("actionSin_notas"));
        actionSin_notas->setFont(font1);
        actionCon_notas_En_ingles = new QAction(prototipoClass);
        actionCon_notas_En_ingles->setObjectName(QString::fromUtf8("actionCon_notas_En_ingles"));
        actionCon_notas_En_ingles->setFont(font1);
        actionSin_notas_En_ingles = new QAction(prototipoClass);
        actionSin_notas_En_ingles->setObjectName(QString::fromUtf8("actionSin_notas_En_ingles"));
        actionSin_notas_En_ingles->setFont(font1);
        actionSin_notas_2 = new QAction(prototipoClass);
        actionSin_notas_2->setObjectName(QString::fromUtf8("actionSin_notas_2"));
        actionSin_notas_2->setFont(font1);
        actionCon_notas_2 = new QAction(prototipoClass);
        actionCon_notas_2->setObjectName(QString::fromUtf8("actionCon_notas_2"));
        actionCon_notas_2->setFont(font1);
        actionSin_notas_3 = new QAction(prototipoClass);
        actionSin_notas_3->setObjectName(QString::fromUtf8("actionSin_notas_3"));
        actionSin_notas_3->setFont(font1);
        actionCon_notas_3 = new QAction(prototipoClass);
        actionCon_notas_3->setObjectName(QString::fromUtf8("actionCon_notas_3"));
        actionCon_notas_3->setFont(font1);
        actionSin_notas_En_ingles_2 = new QAction(prototipoClass);
        actionSin_notas_En_ingles_2->setObjectName(QString::fromUtf8("actionSin_notas_En_ingles_2"));
        actionSin_notas_En_ingles_2->setFont(font1);
        actionCon_notas_En_ingles_2 = new QAction(prototipoClass);
        actionCon_notas_En_ingles_2->setObjectName(QString::fromUtf8("actionCon_notas_En_ingles_2"));
        actionCon_notas_En_ingles_2->setFont(font1);
        actionProgramas = new QAction(prototipoClass);
        actionProgramas->setObjectName(QString::fromUtf8("actionProgramas"));
        actionProgramas->setFont(font1);
        actionCambio_de_Seccion = new QAction(prototipoClass);
        actionCambio_de_Seccion->setObjectName(QString::fromUtf8("actionCambio_de_Seccion"));
        actionCambio_de_Seccion->setFont(font1);
        actionFusion_de_Secciones = new QAction(prototipoClass);
        actionFusion_de_Secciones->setObjectName(QString::fromUtf8("actionFusion_de_Secciones"));
        actionFusion_de_Secciones->setFont(font1);
        actionRetiro_Suspensi_n = new QAction(prototipoClass);
        actionRetiro_Suspensi_n->setObjectName(QString::fromUtf8("actionRetiro_Suspensi_n"));
        actionRetiro_Suspensi_n->setFont(font1);
        actionTraslado_de_Sede = new QAction(prototipoClass);
        actionTraslado_de_Sede->setObjectName(QString::fromUtf8("actionTraslado_de_Sede"));
        actionTraslado_de_Sede->setFont(font1);
        actionGraduandos = new QAction(prototipoClass);
        actionGraduandos->setObjectName(QString::fromUtf8("actionGraduandos"));
        actionGraduandos->setFont(font1);
        actionCorrelativos = new QAction(prototipoClass);
        actionCorrelativos->setObjectName(QString::fromUtf8("actionCorrelativos"));
        actionCorrelativos->setFont(font1);
        actionCuadre_Diario = new QAction(prototipoClass);
        actionCuadre_Diario->setObjectName(QString::fromUtf8("actionCuadre_Diario"));
        actionCuadre_Diario->setFont(font3);
        actionProfesores = new QAction(prototipoClass);
        actionProfesores->setObjectName(QString::fromUtf8("actionProfesores"));
        actionProfesores->setFont(font1);
        actionSecciones_2 = new QAction(prototipoClass);
        actionSecciones_2->setObjectName(QString::fromUtf8("actionSecciones_2"));
        actionSecciones_2->setFont(font1);
        actionCursos = new QAction(prototipoClass);
        actionCursos->setObjectName(QString::fromUtf8("actionCursos"));
        actionCursos->setFont(font1);
        actionPrecios_2 = new QAction(prototipoClass);
        actionPrecios_2->setObjectName(QString::fromUtf8("actionPrecios_2"));
        actionPrecios_2->setFont(font1);
        actionAulas = new QAction(prototipoClass);
        actionAulas->setObjectName(QString::fromUtf8("actionAulas"));
        actionAulas->setFont(font1);
        actionAlumnos = new QAction(prototipoClass);
        actionAlumnos->setObjectName(QString::fromUtf8("actionAlumnos"));
        actionAlumnos->setFont(font1);
        actionCedula_de_Ingreso_Mensual = new QAction(prototipoClass);
        actionCedula_de_Ingreso_Mensual->setObjectName(QString::fromUtf8("actionCedula_de_Ingreso_Mensual"));
        actionCedula_de_Ingreso_Mensual->setFont(font3);
        actionCierre_Diario = new QAction(prototipoClass);
        actionCierre_Diario->setObjectName(QString::fromUtf8("actionCierre_Diario"));
        actionCierre_Diario->setFont(font2);
        actionCierre_Mensual = new QAction(prototipoClass);
        actionCierre_Mensual->setObjectName(QString::fromUtf8("actionCierre_Mensual"));
        actionCierre_Mensual->setFont(font1);
        actionCedula_de_Ingresos = new QAction(prototipoClass);
        actionCedula_de_Ingresos->setObjectName(QString::fromUtf8("actionCedula_de_Ingresos"));
        actionCedula_de_Ingresos->setFont(font1);
        actionValija_de_Ingresos_2 = new QAction(prototipoClass);
        actionValija_de_Ingresos_2->setObjectName(QString::fromUtf8("actionValija_de_Ingresos_2"));
        actionValija_de_Ingresos_2->setFont(font1);
        actionUsuario_2 = new QAction(prototipoClass);
        actionUsuario_2->setObjectName(QString::fromUtf8("actionUsuario_2"));
        actionUsuario_2->setFont(font4);
        actionCompa_ia = new QAction(prototipoClass);
        actionCompa_ia->setObjectName(QString::fromUtf8("actionCompa_ia"));
        actionCompa_ia->setFont(font4);
        actionCambio_de_Usuario = new QAction(prototipoClass);
        actionCambio_de_Usuario->setObjectName(QString::fromUtf8("actionCambio_de_Usuario"));
        actionCambio_de_Usuario->setFont(font4);
        actionSalir_2 = new QAction(prototipoClass);
        actionSalir_2->setObjectName(QString::fromUtf8("actionSalir_2"));
        actionSalir_2->setFont(font4);
        actionCaja = new QAction(prototipoClass);
        actionCaja->setObjectName(QString::fromUtf8("actionCaja"));
        actionCaja->setEnabled(false);
        actionCaja->setFont(font4);
        actionControl_de_Estudios = new QAction(prototipoClass);
        actionControl_de_Estudios->setObjectName(QString::fromUtf8("actionControl_de_Estudios"));
        actionControl_de_Estudios->setEnabled(false);
        actionControl_de_Estudios->setFont(font4);
        actionAdministracion = new QAction(prototipoClass);
        actionAdministracion->setObjectName(QString::fromUtf8("actionAdministracion"));
        actionAdministracion->setEnabled(false);
        actionAdministracion->setFont(font4);
        actionMercadeo = new QAction(prototipoClass);
        actionMercadeo->setObjectName(QString::fromUtf8("actionMercadeo"));
        actionMercadeo->setEnabled(false);
        actionMercadeo->setFont(font4);
        centralwidget = new QWidget(prototipoClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QScrollArea(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 539));
        frame->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(frame);

        prototipoClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(prototipoClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 231, 231);"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuMacros = new QMenu(menubar);
        menuMacros->setObjectName(QString::fromUtf8("menuMacros"));
        menuMacros->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
""));
        menuModulos = new QMenu(menubar);
        menuModulos->setObjectName(QString::fromUtf8("menuModulos"));
        menuProcesos = new QMenu(menubar);
        menuProcesos->setObjectName(QString::fromUtf8("menuProcesos"));
        menuProcesos->setEnabled(false);
        menuRegistros = new QMenu(menubar);
        menuRegistros->setObjectName(QString::fromUtf8("menuRegistros"));
        menuRegistros->setEnabled(false);
        menuReportes = new QMenu(menubar);
        menuReportes->setObjectName(QString::fromUtf8("menuReportes"));
        menuReportes->setEnabled(false);
        menuOtros = new QMenu(menubar);
        menuOtros->setObjectName(QString::fromUtf8("menuOtros"));
        menuOtros->setEnabled(false);
        menuBasicas = new QMenu(menubar);
        menuBasicas->setObjectName(QString::fromUtf8("menuBasicas"));
        menuBasicas->setEnabled(false);
        prototipoClass->setMenuBar(menubar);
        statusbar = new QStatusBar(prototipoClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 231, 231);"));
        prototipoClass->setStatusBar(statusbar);

        menubar->addAction(menuMacros->menuAction());
        menubar->addAction(menuModulos->menuAction());
        menubar->addAction(menuProcesos->menuAction());
        menubar->addAction(menuBasicas->menuAction());
        menubar->addAction(menuRegistros->menuAction());
        menubar->addAction(menuReportes->menuAction());
        menubar->addAction(menuOtros->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuAyuda->addAction(actionAcerca_de);
        menuAyuda->addAction(actionAcerca_de_Qt);
        menuMacros->addAction(actionUsuario_2);
        menuMacros->addAction(actionCompa_ia);
        menuMacros->addAction(actionCambio_de_Usuario);
        menuMacros->addAction(actionSalir_2);
        menuModulos->addAction(actionCaja);
        menuModulos->addAction(actionControl_de_Estudios);
        menuModulos->addAction(actionAdministracion);
        menuModulos->addAction(actionMercadeo);

        retranslateUi(prototipoClass);

        QMetaObject::connectSlotsByName(prototipoClass);
    } // setupUi

    void retranslateUi(QMainWindow *prototipoClass)
    {
        prototipoClass->setWindowTitle(QApplication::translate("prototipoClass", "FUNDAUC", 0, QApplication::UnicodeUTF8));
        actionImprimir->setText(QApplication::translate("prototipoClass", "Imprimir", 0, QApplication::UnicodeUTF8));
        actionCerrar_Sesion->setText(QApplication::translate("prototipoClass", "Cerrar Sesion", 0, QApplication::UnicodeUTF8));
        actionNueva_Factura->setText(QApplication::translate("prototipoClass", "Nueva Factura", 0, QApplication::UnicodeUTF8));
        actionRegistro_de_Depositos->setText(QApplication::translate("prototipoClass", "Registro de Depositos", 0, QApplication::UnicodeUTF8));
        actionRegistro->setText(QApplication::translate("prototipoClass", "Registro", 0, QApplication::UnicodeUTF8));
        actionFicha_Academica->setText(QApplication::translate("prototipoClass", "Ficha Academica", 0, QApplication::UnicodeUTF8));
        actionFicha_Pago->setText(QApplication::translate("prototipoClass", "Ficha Pago", 0, QApplication::UnicodeUTF8));
        actionRegistroProf->setText(QApplication::translate("prototipoClass", "Registro", 0, QApplication::UnicodeUTF8));
        actionCarga_de_Notas->setText(QApplication::translate("prototipoClass", "Carga de Notas", 0, QApplication::UnicodeUTF8));
        actionListados->setText(QApplication::translate("prototipoClass", "Listados", 0, QApplication::UnicodeUTF8));
        actionCursos_2->setText(QApplication::translate("prototipoClass", "Cursos", 0, QApplication::UnicodeUTF8));
        actionSecciones->setText(QApplication::translate("prototipoClass", "Secciones", 0, QApplication::UnicodeUTF8));
        actionHorarios->setText(QApplication::translate("prototipoClass", "Horarios", 0, QApplication::UnicodeUTF8));
        actionSalones->setText(QApplication::translate("prototipoClass", "Salones", 0, QApplication::UnicodeUTF8));
        actionEventos->setText(QApplication::translate("prototipoClass", "Eventos", 0, QApplication::UnicodeUTF8));
        actionLibros_y_Materiales->setText(QApplication::translate("prototipoClass", "Libros y Materiales", 0, QApplication::UnicodeUTF8));
        actionPrecios->setText(QApplication::translate("prototipoClass", "Precios", 0, QApplication::UnicodeUTF8));
        actionCalendarios->setText(QApplication::translate("prototipoClass", "Calendarios", 0, QApplication::UnicodeUTF8));
        actionEstadisticas->setText(QApplication::translate("prototipoClass", "Estadisticas", 0, QApplication::UnicodeUTF8));
        actionOtros->setText(QApplication::translate("prototipoClass", "Otros", 0, QApplication::UnicodeUTF8));
        actionAcerca_de->setText(QApplication::translate("prototipoClass", "Acerca de...", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_Qt->setText(QApplication::translate("prototipoClass", "Acerca de Qt", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("prototipoClass", "Salir", 0, QApplication::UnicodeUTF8));
        actionAnular_Factura->setText(QApplication::translate("prototipoClass", "Anular Factura", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("prototipoClass", "Abrir", 0, QApplication::UnicodeUTF8));
        actionRegistro_de_Facturas->setText(QApplication::translate("prototipoClass", "Registro de Facturas", 0, QApplication::UnicodeUTF8));
        actionControl_de_Evaluacion->setText(QApplication::translate("prototipoClass", "Control de Evaluacion", 0, QApplication::UnicodeUTF8));
        actionValija_de_Ingresos->setText(QApplication::translate("prototipoClass", "Valija de Ingresos", 0, QApplication::UnicodeUTF8));
        actionDiplomados->setText(QApplication::translate("prototipoClass", "Diplomados", 0, QApplication::UnicodeUTF8));
        actionCalendarioIdiomas->setText(QApplication::translate("prototipoClass", "Idiomas/Computacion", 0, QApplication::UnicodeUTF8));
        actionCalendarioCfp->setText(QApplication::translate("prototipoClass", "CFP (Pagos)", 0, QApplication::UnicodeUTF8));
        actionCarga_Academica->setText(QApplication::translate("prototipoClass", "Carga Academica", 0, QApplication::UnicodeUTF8));
        actionMetodos->setText(QApplication::translate("prototipoClass", "Metodos y Cursos", 0, QApplication::UnicodeUTF8));
        actionUsuario->setText(QApplication::translate("prototipoClass", "Usuarios", 0, QApplication::UnicodeUTF8));
        actionRespaldo->setText(QApplication::translate("prototipoClass", "Respaldo", 0, QApplication::UnicodeUTF8));
        actionIdiomas->setText(QApplication::translate("prototipoClass", "Idiomas", 0, QApplication::UnicodeUTF8));
        actionDiplomados_2->setText(QApplication::translate("prototipoClass", "Diplomados", 0, QApplication::UnicodeUTF8));
        actionInicio_de_Curso->setText(QApplication::translate("prototipoClass", "Inicio de Curso", 0, QApplication::UnicodeUTF8));
        actionBeca_Trabajo->setText(QApplication::translate("prototipoClass", "Beca Trabajo", 0, QApplication::UnicodeUTF8));
        actionActo_de_Grado->setText(QApplication::translate("prototipoClass", "Acto de Grado", 0, QApplication::UnicodeUTF8));
        actionCon_notas->setText(QApplication::translate("prototipoClass", "Con notas", 0, QApplication::UnicodeUTF8));
        actionSin_notas->setText(QApplication::translate("prototipoClass", "Sin notas", 0, QApplication::UnicodeUTF8));
        actionCon_notas_En_ingles->setText(QApplication::translate("prototipoClass", "Con notas / En ingles", 0, QApplication::UnicodeUTF8));
        actionSin_notas_En_ingles->setText(QApplication::translate("prototipoClass", "Sin notas / En ingles", 0, QApplication::UnicodeUTF8));
        actionSin_notas_2->setText(QApplication::translate("prototipoClass", "Sin notas", 0, QApplication::UnicodeUTF8));
        actionCon_notas_2->setText(QApplication::translate("prototipoClass", "Con notas", 0, QApplication::UnicodeUTF8));
        actionSin_notas_3->setText(QApplication::translate("prototipoClass", "Sin notas", 0, QApplication::UnicodeUTF8));
        actionCon_notas_3->setText(QApplication::translate("prototipoClass", "Con notas", 0, QApplication::UnicodeUTF8));
        actionSin_notas_En_ingles_2->setText(QApplication::translate("prototipoClass", "Sin notas / En ingles", 0, QApplication::UnicodeUTF8));
        actionCon_notas_En_ingles_2->setText(QApplication::translate("prototipoClass", "Con notas / En ingles", 0, QApplication::UnicodeUTF8));
        actionProgramas->setText(QApplication::translate("prototipoClass", "Programas", 0, QApplication::UnicodeUTF8));
        actionCambio_de_Seccion->setText(QApplication::translate("prototipoClass", "Cambio de Seccion", 0, QApplication::UnicodeUTF8));
        actionFusion_de_Secciones->setText(QApplication::translate("prototipoClass", "Fusi\303\263n de Secciones", 0, QApplication::UnicodeUTF8));
        actionRetiro_Suspensi_n->setText(QApplication::translate("prototipoClass", "Retiro/Suspensi\303\263n ", 0, QApplication::UnicodeUTF8));
        actionTraslado_de_Sede->setText(QApplication::translate("prototipoClass", "Traslado de Sede", 0, QApplication::UnicodeUTF8));
        actionGraduandos->setText(QApplication::translate("prototipoClass", "Graduandos", 0, QApplication::UnicodeUTF8));
        actionCorrelativos->setText(QApplication::translate("prototipoClass", "Correlativos", 0, QApplication::UnicodeUTF8));
        actionCuadre_Diario->setText(QApplication::translate("prototipoClass", "Cuadre Diario", 0, QApplication::UnicodeUTF8));
        actionProfesores->setText(QApplication::translate("prototipoClass", "Profesores", 0, QApplication::UnicodeUTF8));
        actionSecciones_2->setText(QApplication::translate("prototipoClass", "Secciones", 0, QApplication::UnicodeUTF8));
        actionCursos->setText(QApplication::translate("prototipoClass", "Cursos", 0, QApplication::UnicodeUTF8));
        actionPrecios_2->setText(QApplication::translate("prototipoClass", "Precios", 0, QApplication::UnicodeUTF8));
        actionAulas->setText(QApplication::translate("prototipoClass", "Aulas", 0, QApplication::UnicodeUTF8));
        actionAlumnos->setText(QApplication::translate("prototipoClass", "Alumnos", 0, QApplication::UnicodeUTF8));
        actionCedula_de_Ingreso_Mensual->setText(QApplication::translate("prototipoClass", "Cedula de Ingreso Mensual", 0, QApplication::UnicodeUTF8));
        actionCierre_Diario->setText(QApplication::translate("prototipoClass", "Cierre Diario", 0, QApplication::UnicodeUTF8));
        actionCierre_Mensual->setText(QApplication::translate("prototipoClass", "Cierre Mensual", 0, QApplication::UnicodeUTF8));
        actionCedula_de_Ingresos->setText(QApplication::translate("prototipoClass", "Cedula de Ingresos", 0, QApplication::UnicodeUTF8));
        actionValija_de_Ingresos_2->setText(QApplication::translate("prototipoClass", "Valija de Ingresos", 0, QApplication::UnicodeUTF8));
        actionUsuario_2->setText(QApplication::translate("prototipoClass", "Usuario", 0, QApplication::UnicodeUTF8));
        actionCompa_ia->setText(QApplication::translate("prototipoClass", "Compa\303\261ia", 0, QApplication::UnicodeUTF8));
        actionCambio_de_Usuario->setText(QApplication::translate("prototipoClass", "Cambio de Usuario", 0, QApplication::UnicodeUTF8));
        actionSalir_2->setText(QApplication::translate("prototipoClass", "Salir", 0, QApplication::UnicodeUTF8));
        actionCaja->setText(QApplication::translate("prototipoClass", "Caja", 0, QApplication::UnicodeUTF8));
        actionControl_de_Estudios->setText(QApplication::translate("prototipoClass", "Control de Estudios", 0, QApplication::UnicodeUTF8));
        actionAdministracion->setText(QApplication::translate("prototipoClass", "Administracion de Sistema", 0, QApplication::UnicodeUTF8));
        actionMercadeo->setText(QApplication::translate("prototipoClass", "Mercadeo", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("prototipoClass", "Ayuda", 0, QApplication::UnicodeUTF8));
        menuMacros->setTitle(QApplication::translate("prototipoClass", "Sesion", 0, QApplication::UnicodeUTF8));
        menuModulos->setTitle(QApplication::translate("prototipoClass", "Modulos", 0, QApplication::UnicodeUTF8));
        menuProcesos->setTitle(QApplication::translate("prototipoClass", "Procesos", 0, QApplication::UnicodeUTF8));
        menuRegistros->setTitle(QApplication::translate("prototipoClass", "Registros", 0, QApplication::UnicodeUTF8));
        menuReportes->setTitle(QApplication::translate("prototipoClass", "Reportes", 0, QApplication::UnicodeUTF8));
        menuOtros->setTitle(QApplication::translate("prototipoClass", "Otros", 0, QApplication::UnicodeUTF8));
        menuBasicas->setTitle(QApplication::translate("prototipoClass", "Tablas Basicas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class prototipoClass: public Ui_prototipoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROTOTIPO_H
