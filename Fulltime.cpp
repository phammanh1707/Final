#include "Fulltime.h"
#include "Employee.h"
#include <iostream>
#define BONUS_LEVEL1 50
#define BONUS_LEVEL2 100
#define BONUS_LEVEL3 200
using namespace std;
double Fulltime::addBonus()
{
	if (1 <= rating <= 4)
		return BONUS_LEVEL1;
	else if (5 <= rating <= 7)
		return BONUS_LEVEL2;
	else
		return BONUS_LEVEL3;
}
double Fulltime::calcualateSalary()
{
	return BASIC_SALARY * rating + addBonus();
}
ostream& operator<<(ostream& os, Fulltime& f)
{
	f.detailEmployee(os);
	return os;
}
void Fulltime::detailEmployee(ostream& os)
{
	os << "Type of employee: " << type << ", Id: " << id << ", Name: " << name << ", Age" << age <<
		", Telephone: " << telephone << ", Rating: " << rating;
}