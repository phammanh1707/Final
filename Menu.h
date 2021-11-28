#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
#define EXIT 0
class Menu
{
public:
	void run();
protected:
    virtual void printMenu(); // no implementation
    int getChoice() ;
    virtual void doTask(int& choice); // no implementation
};

