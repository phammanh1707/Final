#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee()
{

}
Employee::~Employee()
{

}
Employee::Employee(int id, string name, int age, string telephone, double rating, string type)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->telephone = telephone;
	this->rating = rating;
	this->type = type;
}
//int setId()
//{
//	int id;
//	id = ID++;
//	cout << "ID: " << id <<endl;
//	return id;
//}
//string setName()
//{
//	string name;
//	cout << "name: ";
//	getline(cin, name);
//	return name;
//}
//int  setAge()
//{
//	int age;
//	cout << "age: ";
//	cin >> age;
//	//this->age = age;
//	return age;
//}
//string setTelephone(string& telephone)
//{
//	string telephone;
//	cout << "telephone: ";
//	getline(cin, telephone);
//	// this->telephone = telephone;
//	 return telephone;
//}
//double setRating(double& rating)
//{
//	double rating;
//	cout << "rating: ";
//	cin >> rating;
//	//this->rating = rating;
//	return rating;
//}
//string setType(string& type)
//{
//	string type;
//	cout << "type: ";
//	getline(cin, type);
//	 //this->type = type;
//	return type;
//}
ostream& operator<<(ostream& os, Employee& e)
{
	e.detailEmployee(os);
	return os;
}
void Employee::print()
{
	cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Telephone: " << telephone << ", Raing: " << rating <<
		", Salary: " << calcualateSalary();
}
void  Employee::detailEmployee(ostream& os)
{

}