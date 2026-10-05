#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_mdp_oublie_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_btn_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_btn_verification_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_btn_connexion_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_btn_gestion_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_btn_deconnexion_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btn_connecter_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


