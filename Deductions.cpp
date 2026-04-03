#include "Deductions.h"
#include "Absent_Late.h"
#include <iostream>
using namespace std;

Deductions::Deductions()
{
    sss = 1750.00;
    pag_ibig = 200.00;
    phil_health = 0.0;
    deductedGross = 0.0;
    calcRes = 0.0;
}

double Deductions::getPhilHealth()
{
calcRes = ab->calcResult();
    if (calcRes >= 100000)
    {
        phil_health = 2500;
    }

    else if (calcRes >= 50000 && calcRes <= 99999)
    {
        phil_health = 0.025 * calcRes;
    }
    
    return phil_health;
}

double Deductions::totalDeduct()
{
deductedGross = ab->calcResult() - (getPhilHealth() + sss + pag_ibig);
    return deductedGross;
}
