#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{

string Answer = "paris";
string input = "";
cout << "What is the capital of France?" << endl;
getline(cin,input);

transform(input.begin(), input.end(), input.begin(), ::tolower);

if(Answer!= input){
    cout << "incorrect!" << endl;

}
else{
    cout << "GOOD JOB! CORRECT!";
}
return 0;
}