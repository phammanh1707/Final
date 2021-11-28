#pragma once
#include "Employee.h"
//const string HOURLY = "hourly";
class Hourly :
    public Employee
{
private:
    int hours;
public:
    Hourly();
    ~Hourly();
    Hourly(int& id, string& name, int& age, string& telephone, double& rating, string& type) :Employee(id, name, age, telephone, rating, type)
    {
        this->type = "hourly";
        this->hours = hours;
    }
    void setHours(int& hours);
    double calcualateSalary();
    friend ostream& operator<<(ostream& os, Hourly& h);
    void detailEmployee(ostream& os);
};

