#include <stab.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Declarations
int Fact(int _n);
int FactRec(int _n);
void PrintArgError();
void PrintHelp();
int main(int argc, char *argv[]){

    if(argc < 2){
        PrintArgError();
    }else {
        //GET NUMBER
        char *a = argv[1];
        int num = atoi(argv[1]);
        cout << "Computing " << num << " factorial"<<endl ;

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
            cout << FactRec(num) << endl ;
        }else{
            cout << Fact(num) << endl;
        }
    }

    return 0;
}

int Fact(int _n){
    int _counter;
    int _return = 1e0;

    for (int _counter = 2; _counter <= _n; _counter++)
    {
        _return *= _counter;
    }

    return _return;
}

int FactRec(int _n){
    return ((_n > 1) ? _n *= FactRec(_n-1) : 1 );
}

void PrintArgError(){
    cout << "Improper arguemnets. Use --help to get assistance"<<endl;
}

void PrintHelp(){
    cout << "Pass number and then method to use to find the factorial"<< endl;
    
}