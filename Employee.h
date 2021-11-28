#pragma once
#include <iostream>
#include <string>
using namespace std;
static int ID = 0;
const string FULLTIME = "fulltime";
const string PARTTIME = "parttime";
const string HOURLY = "hourly";
#define BASIC_SALARY 500

class Employee
{
public:
	int id;
	string name;
	int age;
	string telephone;
	int rating;
	string type;
public:
	Employee();
	~Employee();
	Employee(int id, string name, int age, string telephone, double rating, string type);
	virtual double calcualateSalary()=0;
	 void detailEmployee(ostream& os);
	//friend int setId();
	//friend int setAge();
	//friend string setName();
	//friend string setTelephone();
	//friend double setRating();
	//friend string setType();
	friend ostream& operator<<(ostream& os, Employee& e);
	void print();

};
//int  setAge()
//{
//	int age;
//	cout << "age: ";
//	cin >> age;
//	//this->age = age;
//	return age;
//}
//string setTelephone()
//{
//	string telephone;
//	cout << "telephone: ";
//	getline(cin, telephone);
//	// this->telephone = telephone;
//	return telephone;
//}
//double setRating()
//{
//	double rating;
//	cout << "rating: ";
//	cin >> rating;
//	//this->rating = rating;
//	return rating;
//}
//string setType()
//{
//	string type;
//	cout << "type: ";
//	getline(cin, type);
//	//this->type = type;
//	return type;
//}
//int setId()
//{
//	int id;
//	id = ID++;
//	cout << "ID: " << id << endl;
//	return id;
//}
//string setName()
//{
//	string name;
//	cout << "name: ";
//	getline(cin, name);
//	return name;
//}
