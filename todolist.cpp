#include <iostream>
#include "todolistfunctions.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string response;
    todo::assign();
    do
    {
        cout << "*************************" << endl;
        cout << "What would you like to do?" << endl;
        cout << "1. Add a new to-do" << endl;
        cout << "2. Remove a to-do" << endl;
        cout << "3. View to-do list" << endl;
        cout << "4. Exit Menu " << endl;
        cout << ">> ";
        cin >> response;
        cin.ignore(1, '\n');
        todo::todolist(response);
    } while (response != 4);
}