#include <iostream>
#include "Absent_Late.h"
#include "Gross.h"
using namespace std;
#define meow Absent_Late

meow::Absent_Late()
{
    lateDeduct = 0.0;
    absentDeduct = 0.0;
    pay = 0.0;
    absent = 0;
    late = 0;
    dailyRate = 0.0;
    currentGross = 0.0;

}

double meow::getDailyRate()
{
    dailyRate = g->grossPay() / 22;
    return dailyRate;
}

double meow::getHourlyRate()
{
    hourlyRate = getDailyRate() / 8;
    return hourlyRate;
}

void meow::setAbsent(int absent)
{
    this->absent = absent;
}

void meow::setLate(int late)
{
    this->late = late;
}

double meow::calcAbsentRate()
{
    absentDeduct = absent * getDailyRate();
    return absentDeduct;
}
double meow::calcLateRate()
{
    lateDeduct = late * (getHourlyRate() / 60);
    return lateDeduct;
}
double meow::calcResult()
{
    currentGross = g->grossPay();
    pay = currentGross - (calcAbsentRate() + calcLateRate());
    return pay;
}
