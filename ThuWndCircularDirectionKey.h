#ifndef THUWNDCIRCULARDIRECTIONKEY_H
#define THUWNDCIRCULARDIRECTIONKEY_H

#include <QWidget>

namespace Ui {
class ThuWndCircularDirectionKey;
}

class ThuWndCircularDirectionKey : public QWidget
{
    Q_OBJECT

public:
    explicit ThuWndCircularDirectionKey(QWidget *parent = nullptr);
    ~ThuWndCircularDirectionKey();
protected:
    void paintEvent( QPaintEvent *event );
private:
    void init_ctrl();
    void init_connect();
    void SetButtonStyle();
private:
    Ui::ThuWndCircularDirectionKey *ui;
};

#endif // THUWNDCIRCULARDIRECTIONKEY_H
