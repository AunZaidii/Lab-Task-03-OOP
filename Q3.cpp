#include<iostream>
#include<conio.h>
using namespace std;

struct number{
int no1,no2;
};
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q3\n"<<endl;

number num;
cout<<"Enter no1: ";
cin>>num.no1;
cout<<"Enter no2: ";
cin>>num.no2;

int temp = num.no1;
num.no1 = num.no2;
cout<<"The swapped numbers are:\nNo1: "<<num.no1<<"\nno2: "<<temp<<endl;
    return 0;
}

