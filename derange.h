#ifndef DERANGE_H
#define DERANGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class derange; }
QT_END_NAMESPACE

class derange : public QMainWindow
{
    Q_OBJECT

public:
    derange(QWidget *parent = nullptr);
    ~derange();

private:
    Ui::derange *ui;
};
#endif // DERANGE_H
