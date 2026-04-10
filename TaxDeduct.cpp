#include <iostream>
#include "TaxDeduct.h"
#include "deductions.h"
using namespace std;
#define td TaxDeduct

td::TaxDeduct()
{
    excess = 0.0;
    checkExcess = 0.0;
    excessBase = 0.0;
    tax = 0.0;
    tcalc = 0.0;
}

double td::excessBases()
{
    pay = d->totalDeduct();

    if (pay <= 20833 && pay != 0) // 1
    {
        excessBase = 0;
    }
    else if (pay <= 33232 && pay >= 20833) // 2
    {
        excessBase = 20833;
    }
    else if (pay <= 66666 && pay >= 33333) // 3
    {
        excessBase = 33333;
    }
    else if (pay <= 166666 && pay >= 66667) // 4
    {
        excessBase = 66667;
    }
    else if (pay <= 666666 && pay >= 166667) // 5
    {
        excessBase = 166667;
    }

    return excessBase;
}

double td::setTax()
{
    ebft = pay - excessBases();
    checkExcess = excessBases();

    if (checkExcess == 0)
    {
        tax = 0;
    }
    else if (checkExcess == 20833)
    {
        tax = 0.15 * ebft;
    }
    else if (checkExcess == 33333)
    {
        tax = 0.2 * ebft;
    }
    else if (checkExcess == 66667)
    {
        tax = 0.25 * ebft;
    }
    else if (checkExcess == 166667)
    {
        tax = 0.3 * ebft;
    }

    return tax;
}

double td::netPay()
{
setTax();
    if (checkExcess == 0)
    {
        tcalc = 0.0;
    }
    else if (checkExcess == 20833)
    {
        tcalc = 0.0;
    }
    else if (checkExcess == 33333)
    {
        tcalc = 1875.0;
    }
    else if (checkExcess == 66667)
    {
        tcalc = 8541.8;
    }
    else if (checkExcess == 166667)
    {
        tcalc = 33541.8;
    }

    finalPay = pay - (setTax() + tcalc);
    return finalPay;//final pay
}