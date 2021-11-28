#include "Menu.h"
void Menu::run()
{
    bool running = true;
    while (running)
    {
        printMenu();
        int choice = getChoice();
        doTask(choice);
        running = choice != EXIT;
    }
}
int Menu::getChoice() 
{
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}
void Menu::doTask(int& choice)
{

}
void Menu::printMenu()
{

}