#include <iostream>
#include "Gross.h"
#include "Absent_Late.h"
#include "Deductions.h"
#include "TaxDeduct.h"
#include <string>
using namespace std;

// data: role|position|absences|late|
//taking late 
int main(int argc, char *argv[])
{
    Gross g;
    Deductions d;
    Absent_Late al;
    TaxDeduct t;

    al.getGrossAdress(&g);
    g.getDeductAdress(&d);
    d.getAbsentLateAdress(&al);
    t.getDeductionsAdress(&d);

    std::string pos = argv[1];
    std::string rol = argv[2];
    std::string absentUnconverted = argv[3];
    std::string lateUnconverted = argv[4];

    int absent = std::stoi(absentUnconverted);
    int late = std::stoi(lateUnconverted);
    double absentD = std::stod(absentUnconverted);
    double lateD = std::stod(lateUnconverted);

    al.setAbsent(absent);
    al.setLate(late);
    g.setPos(pos);
    g.setRol(rol);

    cout <<  g.grossPay()<<"|"<<absentD<<"|"<<lateD<<"|"<<al.calcResult()<<"|"<<d.getPhilHealth()<<"|"<<1750.00<<"|"<<200.00<<"|"<<d.totalDeduct()<<"|"<<t.excessBases()<<"|"<<t.setTax()<<"|"<<t.netPay()<<endl;
    //  ---gross---absent--late--payAfterAbsentLate---philhealth---sss---pagibig---payAfterDeductions---excess---tax---netPay

    return 0;
}
