#include "eecs230.h"

//
// Lab 2 programs
//

//int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    //return 0;
//}

//int main() {
    //illegalStatements();
    //cout << "Start with Exercise 1 (legal/illegal statements)" << endl;
    //cout << "Then work on the exercises and code them up." << endl;
//}

void odd_or_even(int num)
{
    if(num%2 == 0)  //even
        cout << num << " is even\n";
    else  //odd
        cout << num << " is odd\n";
}

void calc()
{
    string operation;
    double first;
    double second;
    cin>>operation>>first>>second;

    if( operation == "+"){
        cout<<(first+second);
    }

    if( operation == "-"){
        cout<<(first+second);
    }

    if( operation == "*"){
        cout<<(first*second);
    }

    if( operation == "/"){
        cout<<(first/second);
    }
}


int main()  {

//    odd_or_even(5);
//    odd_or_even(8);
//
//    return 0;

    calc();
}




