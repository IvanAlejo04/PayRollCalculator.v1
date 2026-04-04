#pragma once

class Absent_Late;

class Deductions
{

private:
    Absent_Late *ab;
    double sss;
    double pag_ibig;
    double phil_health;
    double deductedGross;
    double calcRes;

public:
    Deductions();
    void getAbsentLateAdress(Absent_Late *gr)
    {
        this->ab = gr;
    }
    double totalDeduct();
    double getPhilHealth();
};