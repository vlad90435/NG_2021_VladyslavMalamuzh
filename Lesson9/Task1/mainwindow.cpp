#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->words_result->setReadOnly(true);
    connect(ui->words_input,&QTextEdit::textChanged,this,&MainWindow::wordsCounter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wordsCounter()
{
    QString line = ui->words_input->toPlainText();
    ui->words_result->setValue(0);
    int words = 0;
    for (int i = 0; line[i] != 0; i++)
    {
        if((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
        {
            if(!(line[i+1] >= 'A' && line[i+1] <= 'Z') && !(line[i+1] >= 'a' && line[i+1] <= 'z'))
            {
                words++;
            }
        }
    }
    ui->words_result->setValue(words);
}

