#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNum;

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
    connect(ui->pushB_multiplication,SIGNAL(clicked()),this,SLOT(calc()));
    connect(ui->pushB_division,SIGNAL(clicked()),this,SLOT(calc()));

    ui->pushB_subtraction->setCheckable(true);
    ui->pushB_addition->setCheckable(true);
    ui->pushB_multiplication->setCheckable(true);
    ui->pushB_division->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton  *button = (QPushButton*) sender();

    double labelNumber;
    QString numbersToString;

    labelNumber = (ui->result->text() + button -> text()).toDouble();
    numbersToString = QString::number(labelNumber, 'g', 14);

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

    firstNum = ui -> result->text().toDouble();
    ui -> result ->setText("");

}


void MainWindow::on_pushB_AC_clicked()
{
    ui->pushB_addition->setChecked(false);
    ui->pushB_subtraction->setChecked(false);
    ui->pushB_multiplication->setChecked(false);
    ui->pushB_division->setChecked(false);

    ui->result->setText("");
}
void MainWindow::on_pushB_equals_clicked()
{
    double labelNumber,secondNumber;
    QString numbersToString;

    secondNumber = ui->result->text().toDouble();


    if (ui->pushB_addition->isChecked()){
        labelNumber = firstNum + secondNumber;
        numbersToString = QString::number(labelNumber, 'g', 14);

        ui->result->setText(numbersToString);
        ui->pushB_addition->setChecked(false);
    }
    else if (ui->pushB_subtraction->isChecked()){
        labelNumber = firstNum - secondNumber;
        numbersToString = QString::number(labelNumber, 'g', 14);

        ui->result->setText(numbersToString);
        ui->pushB_subtraction->setChecked(false);
    }
    else if (ui->pushB_multiplication->isChecked()){
        labelNumber = firstNum * secondNumber;
        numbersToString = QString::number(labelNumber, 'g', 14);

        ui->result->setText(numbersToString);
        ui->pushB_multiplication->setChecked(false);
    }
    else if (ui->pushB_division->isChecked()){
        if (secondNumber == 0){
             ui->result->setText("Error! You can`t divide 0");
        }
        else{
            labelNumber = firstNum / secondNumber;
            numbersToString = QString::number(labelNumber, 'g', 14);

            ui->result->setText(numbersToString);
            ui->pushB_division->setChecked(false);
        }
    }
}
