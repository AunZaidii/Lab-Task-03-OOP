#include<iostream>
#include<conio.h>
using namespace std;

struct product{
    string productName;
    float price, quantity;};
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q7\n"<<endl;

product p;
    cout<<"Enter product name: ";
    cin>>p.productName;
    cout<<"Enter price per unit: ";
    cin>>p.price;
    cout<<"Enter quantity: ";
    cin>>p.quantity;
float totalcost = p.price*p.quantity;
cout<<"\nThe total price is: "<<totalcost<<"rs"<<endl;
return 0;
}

