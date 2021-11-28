#include "DemoProgram.h"
#include "Employee.h"
#include "Information.h"
#include <fstream>
#include <ostream>
DemoProgram::DemoProgram()
{

}
void DemoProgram::printMenu()
{
	cout << "PLEASE ENTER YOUR CHOICE!" << endl;
	cout << "1. ADD EMPLOYEE" << endl;
	cout << "2. DELETE EMPLOYEE BY ID" << endl;
	cout << "3. EDIT EMPLOYEE BY ID" << endl;
	cout << "4. SEARCH FULLTIME EMPLOYEE BY NAME" << endl;
	cout << "5. SHOW ALL EMPLOYEE" << endl;
	cout << "6. LOAD FILE" << endl;
	cout << "7. SAVE FILE" << endl;
	cout << "PRESS 0: EXIT" << endl;
	cout << endl;
}
void DemoProgram::doTask(int& choice)
{
	
	switch (choice)
	{
	case 1:
		addEmployee(choice);
		break;
	case 2:
		deleteEmployee();
		break;
	case 3:
		editEmployee();
		break;
	case 4: 
		searchEmployee();
		break;
	case 5:
		printAll();
		break;
	case 6:
		loadFile();
		break;
	case 7:
		saveFile();
		break;
	default:
		break;
	}
}
void DemoProgram::addEmployee(int& choice)
{
	Employee* add{};
	cout << "*** ADD EMPLOYEE ****" << endl;
	cout << "PRESS 1: Add fulltime employee." << endl;
	cout << "PRESS 2: Add parttime employee." << endl;
	cout << "PRESS 3: Add hourly time employee." << endl;
	int _choice = getChoice();
	int id = ID++;
	int _age;
	string _name;
	string _telephone;
	string _type;
	double _rating;
	//cin >> name;
	//cin >> age;
	//cin >> telephone;
	//	cin >> type;
	//	cin >> rating;
	_age = setAge();
	_name = setName();
	_telephone = setTelephone();
	 _rating = setRating();
	if (_choice == 1)
	{
		//_type = setType();
		_type = FULLTIME;
		add = new Fulltime(id, _name, _age, _telephone, _rating, _type);
		employees.push_back(add);
	}
	else if (_choice == 2)
	{
		_type = PARTTIME;
		add = new Parttime(id, _name, _age, _telephone, _rating, _type);
		employees.push_back(add);
	}
	else
	{
		_type = HOURLY;
		add = new Hourly(id, _name, _age, _telephone, _rating, _type);
		employees.push_back(add);
	}
	count_e++;
	cout << "***** Add Employee Successfully *****" << endl;
}
void DemoProgram::editEmployee()
{
	//Employee* edit;
	int id;
	//int _age;
	//string _name;
	//string _telephone;
	//string _type;
	//double _rating;
	cout << "Please enter ID that you want to edit: " << endl;
	cin >> id;
	if (id > count_e)
	{
		cout << "ID not exits!" << endl;
	}
	else
		
	{
		employees[id]->name = setName();
		employees[id]->telephone = setTelephone();
		employees[id]->type = setType();
		employees[id]->rating = setRating();
	}
	cout << "***** Edit Employee Successfully *****" << endl;
}
void DemoProgram::deleteEmployee()
{
	Employee* del;
	int id;
	cout << "Please enter ID that you want to delete: " << endl;
	cin >> id;
	if (id > count_e)
	{
		cout << "ID not exits!" << endl;
	}
	else
	{
		cout << "I will delete Employee's Infomation" << endl;
		employees[id]->print();
		delete employees[id];
		count_e--;
	}
	cout << "***** Delete Employee Successfully *****" << endl;
}
void DemoProgram::searchEmployee() {
	string _name;
	int is_search = 0;
	cout << "Please enter name that you want to search: " << endl;
	getline(cin, _name);
	for (int i = 0; i < count_e; i++)
	{
		if (employees[i]->name == _name)
		{
			is_search = 1;
			cout << "I saw the name that you want search!" << endl;
			break;
		}
	}
	if (is_search == 0)
	{
		cout << "I don't see any name that you want search!" << endl;
	}
	
}
void  DemoProgram::printAll()
{
	for (int j = 0; j < count_e; j++)
	{
		employees[j]->print();
	}
}
void DemoProgram::deleteAll()
{
	for (int j = 0; j < count_e; j++)
	{
		delete employees[j];
	}
}
void DemoProgram::loadFile()
{
	string line;
	ifstream myfile;
	myfile.open("C:/Users/Dell/Documents/employee_list.txt");
	//ifstream myfile("C:.....employee_list.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << endl;
		}

		myfile.close();
	}
	else
		cout << "Unable to open file";
}
void DemoProgram::saveFile()
{
	ofstream myfile("C:/Users/Dell/Documents/employee_list.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < count_e; i++)
		{
			myfile << employees[i]->id << ", " << employees[i]->name << ", " << employees[i]->age << ", " << employees[i]->telephone << ", "
				<< employees[i]->rating << ", " << employees[i]->type << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}