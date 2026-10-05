/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btn_connecter;
    QPushButton *btn_mdp_oublie;
    QLineEdit *nom;
    QLineEdit *mdp;
    QWidget *verif;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *nom_2;
    QPushButton *btn_verification;
    QPushButton *btn_retour;
    QComboBox *combo_securite;
    QLabel *reponse;
    QWidget *menu;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_acceuil;
    QPushButton *btn_gestion_employe;
    QPushButton *btn_gestion_produit;
    QPushButton *btn_gestion_qualite;
    QPushButton *btn_gestion_client;
    QPushButton *btn_gestion_statistique;
    QPushButton *btn_deconnexion;
    QListWidget *list_gestion_personnel;
    QListWidget *list_gestion_client;
    QListWidget *list_gestion_produit;
    QListWidget *list_gestion_statistique;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *employe;
    QGroupBox *groupAjouter;
    QLabel *txtID;
    QLabel *txtPrenom;
    QLabel *txtNom;
    QLabel *txtPoste;
    QLabel *txtEmail;
    QLabel *txtTelephone;
    QPushButton *ajouter;
    QPushButton *vider;
    QLineEdit *nom_3;
    QLineEdit *prenom;
    QLineEdit *id;
    QLineEdit *telephone;
    QLineEdit *email;
    QLineEdit *poste;
    QLabel *nblTitre;
    QGroupBox *groupListe;
    QTableWidget *tab;
    QPushButton *supprimer;
    QPushButton *modifier;
    QPushButton *recherche;
    QLabel *txtRechercheID;
    QLineEdit *recherche_id;
    QLabel *lblTriPoste;
    QComboBox *cmbTriPoste;
    QPushButton *trier;
    QGroupBox *groupStatistiques;
    QLabel *lblTotalEmployes;
    QLabel *lblValeurTotal;
    QPushButton *afficher;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1188, 712);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(40, 30, 1111, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        login = new QWidget();
        login->setObjectName("login");
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 80, 251, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 120, 71, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 0);"));
        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 210, 141, 20));
        label_4 = new QLabel(login);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 210, 121, 20));
        btn_connecter = new QPushButton(login);
        btn_connecter->setObjectName("btn_connecter");
        btn_connecter->setGeometry(QRect(450, 400, 93, 29));
        btn_connecter->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_mdp_oublie = new QPushButton(login);
        btn_mdp_oublie->setObjectName("btn_mdp_oublie");
        btn_mdp_oublie->setGeometry(QRect(590, 400, 181, 29));
        btn_mdp_oublie->setStyleSheet(QString::fromUtf8(""));
        nom = new QLineEdit(login);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(140, 240, 191, 26));
        mdp = new QLineEdit(login);
        mdp->setObjectName("mdp");
        mdp->setGeometry(QRect(420, 240, 211, 26));
        stackedWidget->addWidget(login);
        verif = new QWidget();
        verif->setObjectName("verif");
        label_11 = new QLabel(verif);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(120, 130, 111, 20));
        label_12 = new QLabel(verif);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(300, 39, 191, 51));
        label_13 = new QLabel(verif);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(120, 190, 141, 20));
        label_14 = new QLabel(verif);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(130, 250, 63, 20));
        nom_2 = new QLineEdit(verif);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(260, 130, 113, 26));
        btn_verification = new QPushButton(verif);
        btn_verification->setObjectName("btn_verification");
        btn_verification->setGeometry(QRect(310, 350, 93, 29));
        btn_verification->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_retour = new QPushButton(verif);
        btn_retour->setObjectName("btn_retour");
        btn_retour->setGeometry(QRect(450, 350, 93, 29));
        combo_securite = new QComboBox(verif);
        combo_securite->addItem(QString());
        combo_securite->addItem(QString());
        combo_securite->setObjectName("combo_securite");
        combo_securite->setGeometry(QRect(270, 190, 231, 26));
        reponse = new QLabel(verif);
        reponse->setObjectName("reponse");
        reponse->setGeometry(QRect(250, 250, 231, 51));
        reponse->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(verif);
        menu = new QWidget();
        menu->setObjectName("menu");
        label_5 = new QLabel(menu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 30, 311, 41));
        label_6 = new QLabel(menu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 20, 63, 20));
        btn_acceuil = new QPushButton(menu);
        btn_acceuil->setObjectName("btn_acceuil");
        btn_acceuil->setGeometry(QRect(60, 130, 261, 29));
        btn_acceuil->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_gestion_employe = new QPushButton(menu);
        btn_gestion_employe->setObjectName("btn_gestion_employe");
        btn_gestion_employe->setGeometry(QRect(60, 180, 261, 29));
        btn_gestion_employe->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_gestion_produit = new QPushButton(menu);
        btn_gestion_produit->setObjectName("btn_gestion_produit");
        btn_gestion_produit->setGeometry(QRect(60, 220, 261, 29));
        btn_gestion_produit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_gestion_qualite = new QPushButton(menu);
        btn_gestion_qualite->setObjectName("btn_gestion_qualite");
        btn_gestion_qualite->setGeometry(QRect(60, 260, 261, 29));
        btn_gestion_qualite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_gestion_client = new QPushButton(menu);
        btn_gestion_client->setObjectName("btn_gestion_client");
        btn_gestion_client->setGeometry(QRect(60, 300, 261, 29));
        btn_gestion_client->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_gestion_statistique = new QPushButton(menu);
        btn_gestion_statistique->setObjectName("btn_gestion_statistique");
        btn_gestion_statistique->setGeometry(QRect(60, 350, 261, 29));
        btn_gestion_statistique->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        btn_deconnexion = new QPushButton(menu);
        btn_deconnexion->setObjectName("btn_deconnexion");
        btn_deconnexion->setGeometry(QRect(150, 480, 93, 29));
        list_gestion_personnel = new QListWidget(menu);
        list_gestion_personnel->setObjectName("list_gestion_personnel");
        list_gestion_personnel->setGeometry(QRect(335, 140, 211, 101));
        list_gestion_personnel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        list_gestion_client = new QListWidget(menu);
        list_gestion_client->setObjectName("list_gestion_client");
        list_gestion_client->setGeometry(QRect(580, 140, 211, 101));
        list_gestion_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        list_gestion_produit = new QListWidget(menu);
        list_gestion_produit->setObjectName("list_gestion_produit");
        list_gestion_produit->setGeometry(QRect(330, 330, 211, 101));
        list_gestion_produit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        list_gestion_statistique = new QListWidget(menu);
        list_gestion_statistique->setObjectName("list_gestion_statistique");
        list_gestion_statistique->setGeometry(QRect(580, 330, 211, 101));
        list_gestion_statistique->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_7 = new QLabel(menu);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 100, 91, 20));
        label_8 = new QLabel(menu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(590, 100, 63, 20));
        label_9 = new QLabel(menu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(330, 300, 63, 20));
        label_10 = new QLabel(menu);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(590, 300, 91, 20));
        stackedWidget->addWidget(menu);
        employe = new QWidget();
        employe->setObjectName("employe");
        groupAjouter = new QGroupBox(employe);
        groupAjouter->setObjectName("groupAjouter");
        groupAjouter->setGeometry(QRect(0, 40, 331, 391));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupAjouter->setFont(font);
        groupAjouter->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    \n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 1px solid #B8D4EA;\n"
"    border-radius: 10px;\n"
"    margin-top: 12px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: #1565A8;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 0 8px;\n"
"}\n"
"QLabel {\n"
"    color: #111111;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        txtID = new QLabel(groupAjouter);
        txtID->setObjectName("txtID");
        txtID->setGeometry(QRect(10, 110, 41, 20));
        txtID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txtPrenom = new QLabel(groupAjouter);
        txtPrenom->setObjectName("txtPrenom");
        txtPrenom->setGeometry(QRect(10, 80, 63, 20));
        txtPrenom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txtNom = new QLabel(groupAjouter);
        txtNom->setObjectName("txtNom");
        txtNom->setGeometry(QRect(10, 50, 51, 20));
        txtNom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txtPoste = new QLabel(groupAjouter);
        txtPoste->setObjectName("txtPoste");
        txtPoste->setGeometry(QRect(10, 230, 51, 20));
        txtPoste->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txtEmail = new QLabel(groupAjouter);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setGeometry(QRect(10, 190, 61, 20));
        txtEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txtTelephone = new QLabel(groupAjouter);
        txtTelephone->setObjectName("txtTelephone");
        txtTelephone->setGeometry(QRect(10, 150, 81, 20));
        txtTelephone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ajouter = new QPushButton(groupAjouter);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(170, 310, 101, 41));
        ajouter->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 600 9pt \"Franklin Gothic Demi\";"));
        vider = new QPushButton(groupAjouter);
        vider->setObjectName("vider");
        vider->setGeometry(QRect(40, 310, 101, 41));
        vider->setStyleSheet(QString::fromUtf8("font: 600 9pt \"Franklin Gothic Demi\";"));
        nom_3 = new QLineEdit(groupAjouter);
        nom_3->setObjectName("nom_3");
        nom_3->setGeometry(QRect(70, 50, 113, 26));
        prenom = new QLineEdit(groupAjouter);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(90, 80, 113, 26));
        id = new QLineEdit(groupAjouter);
        id->setObjectName("id");
        id->setGeometry(QRect(70, 110, 113, 26));
        telephone = new QLineEdit(groupAjouter);
        telephone->setObjectName("telephone");
        telephone->setGeometry(QRect(100, 150, 113, 26));
        email = new QLineEdit(groupAjouter);
        email->setObjectName("email");
        email->setGeometry(QRect(100, 190, 221, 26));
        poste = new QLineEdit(groupAjouter);
        poste->setObjectName("poste");
        poste->setGeometry(QRect(90, 230, 113, 26));
        nblTitre = new QLabel(employe);
        nblTitre->setObjectName("nblTitre");
        nblTitre->setGeometry(QRect(10, 0, 251, 31));
        QFont font1;
        font1.setBold(true);
        nblTitre->setFont(font1);
        nblTitre->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);"));
        groupListe = new QGroupBox(employe);
        groupListe->setObjectName("groupListe");
        groupListe->setGeometry(QRect(340, 40, 761, 421));
        groupListe->setFont(font);
        groupListe->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    \n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 1px solid #B8D4EA;\n"
"    border-radius: 10px;\n"
"    margin-top: 12px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: #1565A8;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 0 8px;\n"
"}\n"
"QLabel {\n"
"    color: #111111;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        tab = new QTableWidget(groupListe);
        if (tab->columnCount() < 6)
            tab->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tab->setObjectName("tab");
        tab->setGeometry(QRect(10, 90, 731, 271));
        tab->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    \n"
"    color: #263238;\n"
"    border: 1px solid #dbe7f0;\n"
"    border-radius: 10px;\n"
"    gridline-color: #edf2f7;\n"
"    font-size: 12px;\n"
"    selection-background-color: #e8f3ff;\n"
"    selection-color: #145da0;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px;\n"
"    border-bottom: 1px solid #edf2f7;\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
"    background-color: #f3f8fc;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #e5f2ff;\n"
"    color: #1261a0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    \n"
"	background-color: rgb(85, 85, 255);\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"    padding: 9px;\n"
"    border: none;\n"
"    border-right: 1px solid #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 9px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 9px;\n"
"}\n"
"\n"
""));
        supprimer = new QPushButton(groupListe);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(380, 370, 111, 41));
        supprimer->setStyleSheet(QString::fromUtf8("font: 600 9pt \"Franklin Gothic Demi\";"));
        modifier = new QPushButton(groupListe);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(270, 370, 93, 41));
        modifier->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 600 9pt \"Franklin Gothic Demi\";"));
        recherche = new QPushButton(groupListe);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(330, 50, 111, 29));
        recherche->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 600 9pt \"Franklin Gothic Demi\";"));
        txtRechercheID = new QLabel(groupListe);
        txtRechercheID->setObjectName("txtRechercheID");
        txtRechercheID->setGeometry(QRect(20, 50, 151, 20));
        txtRechercheID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        recherche_id = new QLineEdit(groupListe);
        recherche_id->setObjectName("recherche_id");
        recherche_id->setGeometry(QRect(180, 50, 141, 26));
        lblTriPoste = new QLabel(groupListe);
        lblTriPoste->setObjectName("lblTriPoste");
        lblTriPoste->setGeometry(QRect(460, 50, 121, 21));
        lblTriPoste->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cmbTriPoste = new QComboBox(groupListe);
        cmbTriPoste->addItem(QString());
        cmbTriPoste->addItem(QString());
        cmbTriPoste->addItem(QString());
        cmbTriPoste->setObjectName("cmbTriPoste");
        cmbTriPoste->setGeometry(QRect(570, 50, 76, 26));
        trier = new QPushButton(groupListe);
        trier->setObjectName("trier");
        trier->setGeometry(QRect(660, 50, 93, 29));
        trier->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 600 9pt \"Franklin Gothic Demi\";"));
        groupStatistiques = new QGroupBox(employe);
        groupStatistiques->setObjectName("groupStatistiques");
        groupStatistiques->setGeometry(QRect(10, 470, 1091, 91));
        groupStatistiques->setFont(font);
        groupStatistiques->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    \n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 1px solid #B8D4EA;\n"
"    border-radius: 10px;\n"
"    margin-top: 12px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: #1565A8;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 0 8px;\n"
"}\n"
"QLabel {\n"
"    color: #111111;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        lblTotalEmployes = new QLabel(groupStatistiques);
        lblTotalEmployes->setObjectName("lblTotalEmployes");
        lblTotalEmployes->setGeometry(QRect(480, 40, 161, 31));
        lblTotalEmployes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblValeurTotal = new QLabel(groupStatistiques);
        lblValeurTotal->setObjectName("lblValeurTotal");
        lblValeurTotal->setGeometry(QRect(660, 40, 31, 20));
        lblValeurTotal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        afficher = new QPushButton(groupStatistiques);
        afficher->setObjectName("afficher");
        afficher->setGeometry(QRect(480, 330, 221, 41));
        afficher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	\n"
"	background-color: rgb(85, 85, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 7px 18px;\n"
"    font-weight: bold;\n"
"}"));
        stackedWidget->addWidget(employe);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1188, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; text-decoration: underline;\">SMART WEATHER</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline;\">MeteORA</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">nom d'utilisateur</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">mot de passe</span></p></body></html>", nullptr));
        btn_connecter->setText(QCoreApplication::translate("MainWindow", "se connecter", nullptr));
        btn_mdp_oublie->setText(QCoreApplication::translate("MainWindow", "mot de passe oubli\303\251", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Nom d'utlisateur", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Mot de passe oubli\303\251</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Question de securite", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Reponse", nullptr));
        btn_verification->setText(QCoreApplication::translate("MainWindow", "verification", nullptr));
        btn_retour->setText(QCoreApplication::translate("MainWindow", "retour", nullptr));
        combo_securite->setItemText(0, QString());
        combo_securite->setItemText(1, QCoreApplication::translate("MainWindow", "numero prefere", nullptr));

        reponse->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Choisissez un modele pour commencer</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MeteORA", nullptr));
        btn_acceuil->setText(QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        btn_gestion_employe->setText(QCoreApplication::translate("MainWindow", "Gestion des employes", nullptr));
        btn_gestion_produit->setText(QCoreApplication::translate("MainWindow", "Gestion des mesures meteorologiques", nullptr));
        btn_gestion_qualite->setText(QCoreApplication::translate("MainWindow", "Gestion des localisations", nullptr));
        btn_gestion_client->setText(QCoreApplication::translate("MainWindow", "Gestion des alertes meteo", nullptr));
        btn_gestion_statistique->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        btn_deconnexion->setText(QCoreApplication::translate("MainWindow", "deconnexion", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Employes</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Alertes</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Mesures</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Localisation</span></p></body></html>", nullptr));
        groupAjouter->setTitle(QCoreApplication::translate("MainWindow", "Ajouter un employ\303\251", nullptr));
        txtID->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">ID :</span></p></body></html>", nullptr));
        txtPrenom->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Pr\303\251nom :</span></p></body></html>", nullptr));
        txtNom->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Nom : </span></p></body></html>", nullptr));
        txtPoste->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Poste :</span></p></body></html>", nullptr));
        txtEmail->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Email :</span></p></body></html>", nullptr));
        txtTelephone->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Telephone :</span></p></body></html>", nullptr));
        ajouter->setText(QCoreApplication::translate("MainWindow", " Ajouter", nullptr));
        vider->setText(QCoreApplication::translate("MainWindow", " Vider", nullptr));
        nblTitre->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; text-decoration: underline;\">Gestion Des Employ\303\251s</span></p></body></html>", nullptr));
        groupListe->setTitle(QCoreApplication::translate("MainWindow", "Liste Des Employ\303\251s", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tab->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tab->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Telephone", nullptr));
        supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        recherche->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        txtRechercheID->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Recherche Selon id :</span></p></body></html>", nullptr));
        lblTriPoste->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Trier par Nom :</span></p></body></html>", nullptr));
        cmbTriPoste->setItemText(0, QCoreApplication::translate("MainWindow", "Tous", nullptr));
        cmbTriPoste->setItemText(1, QCoreApplication::translate("MainWindow", "A-Z", nullptr));
        cmbTriPoste->setItemText(2, QCoreApplication::translate("MainWindow", "Z-A", nullptr));

        trier->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        groupStatistiques->setTitle(QCoreApplication::translate("MainWindow", "statistiques :", nullptr));
        lblTotalEmployes->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Total D'employ\303\251s :</span></p></body></html>", nullptr));
        lblValeurTotal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">0</span></p></body></html>", nullptr));
        afficher->setText(QCoreApplication::translate("MainWindow", "Afficher Les Statistiques", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
