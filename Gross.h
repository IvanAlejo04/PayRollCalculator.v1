#include <iostream>
#include "Deductions.h"
#pragma once

class Gross
{
private:
Deductions* d;
std::string pos;
std::string rol;

double pay;
double base;
double mult;

public:
    Gross();
    void setPos(std::string pos);
    void setRol(std::string rol);
    void getDeductAdress(Deductions* ded){
        this -> d = ded;
    }

    double grossPay();
    double getBase();
    double getMult();

};