#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "dataGetter.h"
#include "harmonicdata.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->addGraph();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{

    int DURATION = 10;
    double DELTATIME = 0.00001;

    ui->widget->clearGraphs();
    ui->widget->addGraph();
    x.clear();

    HarmonicData* dat = dynamic_cast<HarmonicData*>(generateTestData(HARMONIC, DELTATIME, DURATION));
    double yMax = *std::max_element(dat->phaseData->begin(), dat->phaseData->end());
    double yMin = *std::min_element(dat->phaseData->begin(), dat->phaseData->end());
    for (X = DELTATIME; X < DURATION; X += DELTATIME)
        x.push_back(X);
    ui->widget->yAxis->setRange(yMin, yMax);
    ui->widget->xAxis->setRange(0, DURATION);
    ui->widget->graph(0)->addData(x,*dat->phaseData);
    ui->widget->replot();


    /*
    try // запрос данных
    {
    QWidget* currentWidget = ui->tabWidget->currentWidget();
    if (currentTab->text() == "CarTab")
        CarData* dat = dynamic_cast<CarData*>(generateTestData(CAR));
    //...Plane
    //...Harmonic
    ui->graphic_RPM->graph(0)->addData(x,*dat->RPM); // рисуем график
    }
    catch(_exception ex) // если входные данные невалидны
    {
        ui->createErrorWindow(ex.what()); // выводим окно с ошибкой
    }


    double yMax = *std::max_element(dat->phaseData->begin(), dat->phaseData->end());
    double yMin = *std::min_element(dat->phaseData->begin(), dat->phaseData->end());
    */
}

