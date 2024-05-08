#include<iostream>
using namespace std;
struct book{
    string title, author, genre;
    int yop;};

int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 03: Q6\n"<<endl;

book b[5];

for (int i=0;i<5;i++){
    cout<<"Enter book title: ";
    getline(cin,b[i].title);
    cout<<"Enter author of the book: ";
    getline(cin,b[i].author);
    cout<<"Enter genre of the book: ";
    getline(cin,b[i].genre);
    cout<<"Enter year of publication: ";
    cin>>b[i].yop;
    cout<<endl;
    getchar();
}
cout<<"Details of Books: "<<endl;
for (int i=0;i<5;i++){
    cout<<"\nTitle: "<<b[i].title;
    cout<<"\nAuthor: "<<b[i].author;
    cout<<"\nGenre: "<<b[i].genre;
    cout<<"\nYear of publication: "<<b[i].yop;
    cout<<endl;
}

int lowyop = b[0].yop;
int index=0;
for (int i=1;i<5;i++){
    if (b[i].yop<lowyop)
    {lowyop = b[i].yop;
        index=i;}
}
cout<<"\nBook with the earliest publication year: "<<endl<<"\nName :"<<b[index].title<<endl;
cout<<"Author: "<<b[index].author<<endl<<"Genre: "<<b[index].genre<<endl;
cout<<"Year of publication: "<<b[index].yop<<endl;
    return 0;
}

