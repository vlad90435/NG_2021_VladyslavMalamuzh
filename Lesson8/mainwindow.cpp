#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushB_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushB_addition,SIGNAL(clicked()),this,SLOT(calc()));
    connect(ui->pushB_subtraction,SIGNAL(clicked()),this,SLOT(calc()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton  *button = (QPushButton*) sender();

    double storageOfNumbers;
    QString numbersToString;

    storageOfNumbers = (ui->result->text() + button -> text()).toDouble();
    numbersToString = QString::number(storageOfNumbers, 'g', 14);

    ui->result->setText(numbersToString);
}

void MainWindow::on_pushB_dot_clicked()
{
    if(!(ui->result->text().contains('.')))
        ui->result->setText(ui->result->text()+".");
}


void MainWindow::calc()
{
    QPushButton  *button = (QPushButton *) sender();

    button->setChecked(true);

    double storageOfNumbers;
    QString numbersToString;
    if(button->text() == "+"){
        storageOfNumbers = (ui->result->text()).toDouble();
        storageOfNumbers = storageOfNumbers +;
        numbersToString = QString::number(storageOfNumbers, 'g', 14);
    }


    ui->result->setText(numbersToString);
}
