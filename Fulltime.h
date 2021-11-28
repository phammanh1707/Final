#pragma once
#include "Employee.h"
class Fulltime :
    public Employee
{
public:
    Fulltime();
    ~Fulltime();
    Fulltime(int& id, string& name, int& age, string& telephone, double& rating, string& type):Employee(id, name, age, telephone, rating, type)
    {
        this->type = FULLTIME;
    }
    double calcualateSalary();
    double addBonus();
    friend ostream& operator<<(ostream& os, Fulltime& f);
    void detailEmployee(ostream& os);
};

