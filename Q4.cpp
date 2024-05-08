#include<iostream>
#include<conio.h>
using namespace std;

struct students{
    string name;
    int rollno, age;
    float marks;};
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q4\n"<<endl;

students num[3];
for (int i = 0; i<3;i++){
    cout<<"Enter Name: ";
    cin>>num[i].name;
    cout<<"Enter Age: ";
    cin>>num[i].age;
    cout<<"Enter Roll no: ";
    cin>>num[i].rollno;
    cout<<"Enter Marks: ";
    cin>>num[i].marks;
    cout<<endl;

}
cout<<"\nINFORMATION OF STUDENTS: \n";
for (int i=0; i<3;i++){
    cout<<"\nName: "<<num[i].name;
    cout<<"\nAge: "<<num[i].age;
    cout<<"\nRoll No: "<<num[i].rollno;
    cout<<"\nMarks: "<<num[i].marks;
    cout<<endl;
}

int highestindex=0;
for (int i=0;i<3;i++){
    if (num[i].marks>highestindex)
    {highestindex = num[i].marks;
     highestindex = i;}
}
cout<<"\nSTUDENT WITH HIGHEST MARKS: "<<endl;
cout<<"Name: "<<num[highestindex].name<<endl<<"Age: "<<num[highestindex].age<<endl;
cout<<"Roll No: "<<num[highestindex].rollno<<endl<<"Marks: "<<num[highestindex].marks;
}

