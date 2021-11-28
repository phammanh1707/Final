#pragma once
#include "Employee.h"
//const string PARTTIME = "parttime";
class Parttime :
    public Employee
{
public:
    Parttime();
    ~Parttime();
    Parttime(int& id, string& name, int& age, string& telephone, double& rating, string& type) :Employee(id, name, age, telephone, rating, type)
    {
        this->type = "parttime";
    }
    double calcualateSalary();
    friend ostream& operator<<(ostream& os, Parttime& p);
    void detailEmployee(ostream& os);
};

