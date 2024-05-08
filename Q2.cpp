#include<iostream>
#include<conio.h>
using namespace std;

struct rectangle{
float length, width;};

int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q2\n"<<endl;

rectangle rec;
cout<<"Enter length of rectangle: ";
cin>>rec.length;
cout<<"Enter width of ractangle: ";
cin>>rec.width;
int area;
area = rec.length*rec.width;
cout<<"The Area of rectangle is: "<<area<<"m"<<endl;
 return 0;\
}

