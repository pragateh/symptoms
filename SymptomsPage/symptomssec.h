#ifndef SYMPTOMSSEC_H
#define SYMPTOMSSEC_H

#include <QDialog>

namespace Ui {
class symptomsSec;
}

class symptomsSec : public QDialog
{
    Q_OBJECT

public:
    explicit symptomsSec(QWidget *parent = nullptr);
    ~symptomsSec();

private slots:
    void on_pushButton_11_clicked();

private:
    Ui::symptomsSec *ui;
};

#endif // SYMPTOMSSEC_H
