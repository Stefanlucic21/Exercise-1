#include <iostream>
#include <string>

using namespace std;
int main()
{
int month;
cout << "input month number(1-12) " << endl;
cin >> month;
switch (month)
{
case 1:
    cout << "31 days in this month";
    break;
case 2:
    cout << "28/29 days in this month unless its a leap year";
    break;
case 3:
    cout << "31 days in this month";
    break;
case 4:
    cout << "30 days in this month";
    break;
case 5:
    cout << "31 days in this month";
    break;
case 6:
    cout << "30 days in this month";
    break;
case 7:
    cout << "31 days in this month";
    break;
case 8:
    cout << "31 days in this month";
    break;
case 9:
    cout << "30 days in this month";
    break;
case 10:
    cout << "31 days in this month";
    break;
case 11:
    cout << "30 days in this month";
    break;
case 12:
    cout << "31 days in this month";
    break;
default:
cout << "Error, Enter the correct value ";
}
return 0;
}