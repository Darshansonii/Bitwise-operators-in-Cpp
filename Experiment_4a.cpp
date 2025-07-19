//Name-Darshan Soni
//PRN-24070123034
//Exp4

//Basic use of Bitwise operators

#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter first number: ";
    cin>>a; 

    cout<<"Enter second number: ";
    cin>>b;

    int c= a&b;
    int d=a|b;
    int e=a^b;
    int f=~a;
    int g=a<<2;
    int h=b>>2;

    cout<<"\nBinary AND operator: "<< c <<endl; 
    cout<<"Binary OR operator: "<< d <<endl;
    cout<<"Binary XOR operator: "<< e <<endl;
    cout<<"Binary NOT operator: "<< f <<endl;
    cout<<"Left Shift: "<< g <<endl;
    cout<<"Right Shift: "<< h <<endl;

    return 0;
}

/*
Output
Enter first number: 7
Enter second number: 9
Binary AND operator: 1
Binary OR operator: 15
Binary XOR operator: 14
Binary NOT operator: -8
Left Shift: 28
Right Shift: 2
*/