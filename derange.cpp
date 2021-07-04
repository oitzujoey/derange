#include "derange.h"
#include "./ui_derange.h"
#include <QFileDialog>
#include <QMessageBox>

derange::derange(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::derange)
{
    ui->setupUi(this);
}

derange::~derange()
{
    delete ui;
}


void derange::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    QString currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void derange::on_actionSave_triggered()
{

}


void derange::on_actionSave_as_triggered()
{

}

