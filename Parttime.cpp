#include "Parttime.h"
#include <iostream>
using namespace std;
double Parttime::calcualateSalary()
{
	return BASIC_SALARY * rating*0.5;
}
ostream& operator<<(ostream& os, Parttime& p)
{
	p.detailEmployee(os);
	return os;
}
void Parttime::detailEmployee(ostream& os)
{
	os << "Type of employee: " << type << ", Id: " << id << ", Name: " << name << ", Age" << age <<
		", Telephone: " << telephone << ", Rating: ";
}