//Name-Darshan Soni
//PRN-24070123034
//Exp4

//Write a program for a specific bit to be set and reset

#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter the number of which bit you to change:";
    cin>>a;

    int set,bit_to_be_set,reset,bit_to_be_reset;

    cout<<"The bit you want to set:";
    cin>>bit_to_be_set;

    cout<<"The bit you want to reset:";
    cin>>bit_to_be_reset;

    set=a|(1<<bit_to_be_set);
    reset=a|(~(1<<bit_to_be_reset));
    cout<<"After set:"<<set<<endl;
    cout<<"After reset:"<<reset<<endl;
    return 0;
}

/*
Outpiut
Enter the number of which bit you to change:105
The bit you want to set:4
The bit you want to reset:7
After set:121
After reset:-129
*/