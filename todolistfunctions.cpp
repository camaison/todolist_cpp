#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include "todolistfunctions.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
std::vector<string> list;
int response = response.to_int() namespace todo
{
    void assign()
    {
        int num = 0;
        string line;
        std::ifstream read("To do list.txt");
        while (getline(read, line))
        {
            list.push_back(line);
        }
    }

    void upload()
    {
        std::ofstream write("To do list.txt");
        for (string value : list)
        {
            write << value << endl;
        }
    }

    void todolist(int response)
    {
        if (response == 1)
        {
            string entry;
            cout << "New To-do" << endl;
            cout << ">> ";
            getline(cin, entry);
            list.push_back(entry);
            upload();
            cout << "To-do has been added!" << endl;
            for (string val : list)
            {
                cout << val << endl;
            }
        }
        else if (response == 2)
        {
            remove();
        }
        else if (response == 3)
        {
            cout << "Your to-do's are: " << endl;
            view();
        }
        else
        {
            cout << "Invalid Request!" << endl;
        }
    }
}

int count()
{
    int count = list.size();
    return count;
}

void view()
{
    int i = 0;
    for (string word : list)
    {
        i++;
        cout << i << ". " << word << endl;
    }
}

void remove()
{
    int response;
    cout << "Which of your current to-do's would you like to remove?" << endl;
    view();
    cout << ">>";
    cin >> response;
    response--;
    cout << "Removing..." << endl;
    Sleep(3000);
    cout << "The to-do '" << list[response] << "' has been removed." << endl;
    Sleep(1000);
    del(response);
    todo::upload();
}

void del(int response)
{
    list.erase(next(list.begin(), response));
    cout << "Your current to-do's are: " << endl;
    view();
}