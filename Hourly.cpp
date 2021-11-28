#include "Hourly.h"
#include <iostream>
using namespace std;
double Hourly::calcualateSalary()
{
	return (BASIC_SALARY * rating * hours)/240;
}
ostream& operator<<(ostream& os, Hourly& h)
{
	h.detailEmployee(os);
	return os;
}
void Hourly::detailEmployee(ostream& os)
{
	os << "Type of employee: " << type << ", Id: " << id << ", Name: " << name << ", Age" << age <<
		", Telephone: " << telephone << ", Rating: " << endl;
	cout << endl;
}
void Hourly::setHours(int& hours)
{
	this->hours = hours;
}