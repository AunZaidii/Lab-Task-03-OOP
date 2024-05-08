#include<iostream>
#include<conio.h>
using namespace std;

struct Employee{
int id;
float salary;
string name, dept;
};
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q4\n"<<endl;

Employee num[5];

for (int i = 0; i<5;i++){
    cout<<"Enter Name: ";
    cin>>num[i].name;
    getchar();
    cout<<"Enter ID: ";
    cin>>num[i].id;
    getchar();
    cout<<"Enter Department: ";
    cin>>num[i].dept;
    getchar();
    cout<<"Enter Salary: ";
    cin>>num[i].salary;
    cout<<endl;}

cout<<"\nINFORMATION OF EMPLOYEES: \n";
for (int i=0; i<5;i++){
    cout<<"\nName: "<<num[i].name;
    cout<<"\nID: "<<num[i].id;
    cout<<"\nDepartment: "<<num[i].dept;
    cout<<"\nSalary: "<<num[i].salary;
    cout<<endl;}

int avgsal = 0;
int sum = 0;
for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
        sum += num[i].salary;}
avgsal = sum / (sizeof(num)/sizeof(num[0]));
cout<<"\nThe average salary of the employees is: "<<avgsal<<endl;
    return 0;
}

