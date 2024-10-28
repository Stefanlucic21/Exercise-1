#include <iostream>
#include <string>

using namespace std;

int main() 
{
string hometown = "";
string name = "";
int age = 0;
cout << "please enter name:";
getline(cin,name);
cout << "please enter hometown:";
cin >> hometown;
cout << "please enter age:";
cin >> age;
if(cin.fail()){
    cout << "PLEASE USE DIGITS WHEN INPUTTING AGE!" << endl;
return -1;
}
cout << "your name is! " << name << "\nyour hometown is! " << hometown << "\nyour age is! " << age;
return 0;
}