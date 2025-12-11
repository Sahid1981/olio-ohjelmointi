#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent)
{
    qDebug()<<"Start";
    QObject::connect(object1-osoite, signaali-funktio, object2-osoite, slot-funktio );
    qDebug()<<"End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::readyToSay()
{
    qDebug()<<"Terve";
}
