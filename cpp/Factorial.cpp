#include <stab.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Declarations
double Fact(int _n);
double FactRec(int _n);
void PrintArgError();
void PrintHelp();
int main(int argc, char *argv[]){

    if(argc > 1){
        PrintArgError();
    }else {
        //GET NUMBER
        char *a = argv[1];
        int num = atoi(a);

        //GET FACT METHOD
        bool useRec;
        char *b = argv[2];
        if(b == "Rec")
            useRec = true;
        else { 
            useRec = false;
        }

        //CALCULATE FACTORIAL
        if(useRec){
            cout << FactRec(num);
        }else{
            cout << Fact(num);
        }
    }

    return 0;
}

double Fact(int _n){
    int _counter;
    double _return = 1e0;

    for (int _counter = 2; _counter <= _n; _counter++)
    {
        _return += _counter;
    }

    return _return;
}

double FactRec(int _n){
    return ((_n > 1) ? _n * FactRec(_n-1) : 1e0 );
}

void PrintArgError(){
    cout << "Improper arguemnets. Use --help to get assistance"<<endl;
}

void PrintHelp(){
    cout << "Pass number and then method to use to find the factorial"<< endl;
    
}