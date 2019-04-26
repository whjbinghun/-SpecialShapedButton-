#include "ThuWndCircularDirectionKey.h"
#include "ui_ThuWndCircularDirectionKey.h"
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QBitmap>

ThuWndCircularDirectionKey::ThuWndCircularDirectionKey(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ThuWndCircularDirectionKey)
{
    ui->setupUi(this);

    init_ctrl();
    init_connect();
    SetButtonStyle();
}

ThuWndCircularDirectionKey::~ThuWndCircularDirectionKey()
{
    delete ui;
}

void ThuWndCircularDirectionKey::paintEvent(QPaintEvent *event)
{
    QPainter draw( this );
    draw.fillRect( rect(), QBrush( QColor( "black") ) );

    draw.end();
}

//void ThuWndCircularDirectionKey::paintEvent(QPaintEvent *event)
//{
//    QPainter painter(this);
//    painter.save();
//    //设置反锯齿
//    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::Qt4CompatiblePainting);
//    QRect drawRect = event->rect();
//    QRegion region(drawRect.adjusted(10,10,-10,-10),QRegion::Ellipse);
//    drawRect.setSize(QSize(drawRect.width()/2,drawRect.height()/2));
//    drawRect.moveTopLeft(QPoint((event->rect().width() - drawRect.width())/2,(event->rect().height() - drawRect.height())/2));
//    QRegion region2(drawRect,QRegion::Ellipse);
//    QPainterPath painterPath;
//    painterPath.addRegion(region.subtracted(region2));
//    painter.fillPath(painterPath,Qt::red);
//    event->accept();
//    painter.restore();
//}

void ThuWndCircularDirectionKey::init_ctrl()
{

}

void ThuWndCircularDirectionKey::init_connect()
{

}

void ThuWndCircularDirectionKey::SetButtonStyle()
{
    QPixmap pixmap_left( ":/left_normal.png" );
    ui->id_btnLeft->setMask( pixmap_left.mask() );
    ui->id_btnLeft->setStyleSheet( "QPushButton{border-image:url(:/left_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/left_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/left_pressed.png);}");

    QPixmap pixmap_top( ":/top_normal.png" );
    ui->id_btnTop->setMask( pixmap_top.mask() );
    ui->id_btnTop->setStyleSheet( "QPushButton{border-image:url(:/top_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/top_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/top_pressed.png);}");
    QPixmap pixmap_right( ":/right_normal.png" );
    ui->id_btnRight->setMask( pixmap_right.mask() );
    ui->id_btnRight->setStyleSheet( "QPushButton{border-image:url(:/right_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/right_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/right_pressed.png);}");

    QPixmap pixmap_bottom( ":/bottom_normal.png" );
    ui->id_btnBottom->setMask( pixmap_bottom.mask() );
    ui->id_btnBottom->setStyleSheet( "QPushButton{border-image:url(:/bottom_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/bottom_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/bottom_pressed.png);}");

    QPixmap pixmap_clockwise( ":/clockwise_pressed.png" );
    ui->id_btnClockwiseRotation->setMask( pixmap_clockwise.mask() );
    ui->id_btnClockwiseRotation->setStyleSheet( "QPushButton{border-image:url(:/clockwise_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/clockwise_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/clockwise_pressed.png);}");
    QPixmap pixmap_reversal( ":/reversal_pressed.png" );
    ui->id_btnReversal->setMask( pixmap_reversal.mask() );
    ui->id_btnReversal->setStyleSheet( "QPushButton{border-image:url(:/reversal_normal.png);}"
                                                "QPushButton:hover{border-image:url(:/reversal_normal.png);}"
                                                "QPushButton:pressed{border-image:url(:/reversal_pressed.png);}");

}


