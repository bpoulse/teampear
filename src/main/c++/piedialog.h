#ifndef PIEDIALOG_H
#define PIEDIALOG_H

#include <QDialog>

namespace Ui {
class PieDialog;
}

class PieDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PieDialog(QWidget *parent = 0);
    ~PieDialog();

private:
    Ui::PieDialog *ui;
};

#endif // PIEDIALOG_H
