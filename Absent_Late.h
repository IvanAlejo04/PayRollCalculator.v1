#pragma once

class Gross;
class Absent_Late
{
private:
    Gross *g;
    int late;   // done
    int absent; // done

    double dailyRate;  // done
    double hourlyRate; // done
    double currentGross;
    double lateDeduct;   // minuite rate only per minute strictly
    double absentDeduct; // hourly rate
    double pay;

public:
    Absent_Late();

    void setAbsent(int absent); // done
    void setLate(int late);     // done
    double getDailyRate();      // done
    double getHourlyRate();     // done

    double calcAbsentRate(); // done
    double calcLateRate();   // done
    double calcResult();     //
    void getGrossAdress(Gross *gr)
    {
        this->g = gr;
    }
};