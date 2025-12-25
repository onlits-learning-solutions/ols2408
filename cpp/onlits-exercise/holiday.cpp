#include <iostream>

using namespace std;

class Holiday
{
    string name;
    int day;
    int month;
    string description;
    int firstHeldYear;

public:
    void setName(string name);
    string getName();
    void setDay(int day);
    int getDay();
    void setMonth(int month);
    int getMonth();
};

void Holiday::setName(string name)
{
    this->name = name;
}

string Holiday::getName()
{
    return name;
}

class HolidayApp
{
    Holiday holidays[100];
    int count = 0;

public:
    void mainMenu();
    void newHoliday();
    void holidayList();
    void searchHoliday();
};

void HolidayApp::mainMenu()
{
    int ch;
    while (1)
    {
        cout << "MAIN MENU" << endl;
        cout << "1. New Holiday" << endl;
        cout << "2. Holiday List" << endl;
        cout << "Enter choice [0 to exit]: ";
        cin >> ch;
        switch(ch)
        {
        case 0:
            return;
        case 1:
            newHoliday();
            break;
        default:
            cout << "Invalid option!" << endl;
        }
    }
}

void HolidayApp::newHoliday()
{
    string name;
    cout << "Enter Name: ";
    cin >> name;
    holidays[count].setName(name);


    count++;
}

int main(void)
{
    HolidayApp app;
    app.mainMenu();
    return 0;
}