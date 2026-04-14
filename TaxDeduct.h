#pragma once
class Deductions;

class TaxDeduct
{
private:
    Deductions *d;
    double pay; // done
    double excess;//done
    double excessBase;//done
    double ebft;// excessBaseForTax //done
    double checkExcess;//done
    double tax;// done
    double tcalc;
    double finalPay;

public:
    TaxDeduct();// done
    double excessBases();// done
    double setTax();
    double netPay();
    void getDeductionsAdress(Deductions *_d)
    {
        this->d = _d;
    }
};
