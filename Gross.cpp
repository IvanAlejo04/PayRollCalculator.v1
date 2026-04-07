#include <iostream>
#include "Gross.h"
#include "Deductions.h"

using namespace std;

Gross::Gross()
{
    pos = "";
    rol = "";
    pay = 0.0;
    base = 0.0;
    mult = 0.0;
}

void Gross::setPos(std::string pos)
{
    this->pos = pos;
}

void Gross::setRol(std::string rol)
{
    this->rol = rol;
}

double Gross::getBase()
{
    if (pos == "FullStack")
    {
        base = 120000.0;
    }
    if (pos == "FrontEnd")
    {
        base = 70000.0;
    }
    if (pos == "BackEnd")
    {
        base = 100000.0;
    }
    return base;
}

double Gross::getMult()
{
    if(rol == "Jr"){
        mult = 0.0;
    }
    if(rol == "Sr"){
        mult = 0.8;
    }
    return mult;
}

double Gross::grossPay()
{
    pay = getBase() + (getBase() * getMult());
    return pay;
}

