#include <stab.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    char str[100];
    cout << "Enter a string: ";
    cin  >> str;
    cout <<"You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You enetered: " << str<<endl;   
    return 0;
}
