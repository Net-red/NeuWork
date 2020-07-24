#ifndef WAVEWIDGET_H
#define WAVEWIDGET_H

#include <QWidget>
#include <QPixmap>

class WaveWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WaveWidget(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
public slots:
    void refreshWindow();
private:
    QPixmap *pix_;
};

#endif // WAVEWIDGET_H
