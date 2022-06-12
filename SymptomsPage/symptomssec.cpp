#include "symptomssec.h"
#include "ui_symptomssec.h"

symptomsSec::symptomsSec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::symptomsSec)
{
    ui->setupUi(this);
}

symptomsSec::~symptomsSec()
{
    delete ui;
}

void symptomsSec::on_pushButton_11_clicked()
{
    hide();
    // check if previous window is already open, if so, do nothing, else open previous window
}

