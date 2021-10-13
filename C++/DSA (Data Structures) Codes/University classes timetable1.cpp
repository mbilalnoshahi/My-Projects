#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int Time[8] = { 8,9,10,11,12,2,3,4 };
string Day[6] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };

string Monday[8] = { "Physics","Chemistry","Maths","English","Programming","French","ECA","Reference" };
string Tuesday[8] = { "English","Maths","Chemistry","Physics","Reference","French","ECA","Programming" };
string Wednesday[8] = { "Physics","ECA","Maths","English","Programming","French","Chemistry","Reference" };
string Thursday[8] = { "Chemistry","Physics","Maths","English","Programming","Reference","ECA","French" };
string Friday[8] = { "Reference","Chemistry","Maths","English","Programming","French","ECA","Physics" };
string Saturday[8] = { "Physics","Programming","Maths","English","Chemistry","French","ECA","Reference" };

int main()
{
    int time;
    string day;

    cout << "Enter the Time" << endl;
    cin  >> time;

    cout << "Enter the day";
    cin  >> day;


    bool foundday = false;
    bool foundtime = false;
    int timesub = 0;
    int daysub  = 0;

    for (timesub = 0; timesub < 8; timesub++)
    {
        if (Time[timesub] == time)
        {
            foundtime = true;
            break;
        }
    }

    for (daysub = 0; daysub < 6; daysub++)
    {
        if (Day[daysub] == day)
        {
            foundday = true;
            break;
        }
    }

    if (!foundday || !foundtime)
    {
        cout << "no activity found for that time and day\n";
        getch();
        return 0;
    }

    string activity;
    string next;

    switch (daysub)
    {
        case 0: activity = Monday   [timesub]; if (timesub < 7) next = Monday   [timesub+1]; break;
        case 1: activity = Tuesday  [timesub]; if (timesub < 7) next = Tuesday  [timesub+1]; break;
        case 2: activity = Wednesday[timesub]; if (timesub < 7) next = Wednesday[timesub+1]; break;
        case 3: activity = Thursday [timesub]; if (timesub < 7) next = Thursday [timesub+1]; break;
        case 4: activity = Friday   [timesub]; if (timesub < 7) next = Friday   [timesub+1]; break;
        case 5: activity = Saturday [timesub]; if (timesub < 7) next = Saturday [timesub+1]; break;
        default: activity = "Day Not found";   break;
    }

    cout << activity << "  " << next << '\n';

    getch();
}
