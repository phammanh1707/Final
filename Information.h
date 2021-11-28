#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;
class Infomation
{
public:
    friend int setId();
    friend int setAge();
    friend string setName();
    friend string setTelephone();
    friend double setRating();
    friend string setType();
};
int  setAge()
{
	int age;
	cout << "age: ";
	cin >> age;
	//this->age = age;
	return age;
}
string setTelephone()
{
	string telephone;
	cout << "telephone: ";
	cin >> telephone;
	// this->telephone = telephone;
	return telephone;
}
double setRating()
{
	double rating;
	cout << "rating: ";
	cin >> rating;
	//this->rating = rating;
	return rating;
}
string setType()
{
	string type;
	cout << "type: ";
	cin >> type;
	cout << endl;
	//this->type = type;
	return type;
}
int setId()
{
	int id;
	id = ID++;
	cout << "ID: " << id << endl;
	return id;
}
string setName()
{
	string name;
	cout << "name: ";
	cin >> name;
	return name;
}