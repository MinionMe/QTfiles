#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QtWidgets/QMainWindow>

class TempConverter : public QMainWindow
{
    Q_OBJECT

public:
    TempConverter( QWidget *parent = 0);
    ~TempConverter();

    int tempCelsius() const;
    int tempFahrenheit() const;
public slots:
    void setTempCelsius(int);
    void setTempFahrenheit(int);
signals:
    void tempCelsiusChanged(int);
    void tempFahrenheitChanged(int);

private:
    int m_tempCelsius;
};

#endif // TEMPCONVERTER_H
