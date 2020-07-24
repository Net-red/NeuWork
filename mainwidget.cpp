#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "wavewidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    resize(600,300);
    WaveWidget* w = new WaveWidget(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}

