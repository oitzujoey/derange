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

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionNew_triggered();

private:
    Ui::derange *ui;
    QString currentFile;
};
#endif // DERANGE_H
