#include "tempconverter.h"
#include <QtDebug>

TempConverter::TempConverter(QWidget *parent) : QMainWindow(parent), m_tempCelsius(0)
{

}

TempConverter::~TempConverter()
{

}

void TempConverter::setTempCelsius(int tempCelsius)
{
    if (tempCelsius == m_tempCelsius)
    {
        return;
    }
    m_tempCelsius = tempCelsius;
    qDebug() << m_tempCelsius ;
    emit tempCelsiusChanged(m_tempCelsius);
    emit tempFahrenheitChanged(tempFahrenheit());
}

void TempConverter::setTempFahrenheit(int tempFahrenheit)
{
    int tempCelsius = (5.0/9.0) * (tempFahrenheit - 32);
    return setTempCelsius(tempCelsius);
}

int TempConverter::tempFahrenheit() const
{
    return (9.0 / 5.0)*m_tempCelsius + 32 ;
}

int TempConverter::tempCelsius() const
{
    return m_tempCelsius;
}
