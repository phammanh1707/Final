#pragma once
#include "Menu.h"
#include "Employee.h"
#include "Fulltime.h"
#include "Parttime.h"
#include "Hourly.h"
#include <vector>
#include <string>
#define MAX_EMPLOYEE 100
static int count_e = 0;
class DemoProgram :
    public Menu
{
private:
    vector<Employee*> employees;
public:
    //friend int setId();
    //friend int setAge();
    //friend string setName();
    //friend string setTelephone();
    //friend double setRating();
    //friend string setType();
    DemoProgram();
    void printMenu();
    void doTask(int& choice);
    void addEmployee(int& choice);
    void editEmployee();
    void deleteEmployee();
    void searchEmployee();
    void printAll();
    void deleteAll();
    void loadFile();
    void saveFile();
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