#include "derange.h"
#include "./ui_derange.h"

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

