#ifndef BLURDIALOG_H
#define BLURDIALOG_H

#include <QDialog>
#include "transformhistory.h"

namespace Ui {
class BlurDialog;
}

class BlurDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BlurDialog(QWidget *parent = 0);
    ~BlurDialog();

Q_SIGNALS:

    void blurButtonAccepted(bool, TransformHistory::blur_effect);

    void blurButtonApplied(TransformHistory::blur_effect);

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_apply_clicked();

private:
    Ui::BlurDialog *ui;

};

#endif // BLURDIALOG_H
