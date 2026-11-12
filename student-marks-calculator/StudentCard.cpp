#include <iostream>
#include<string>
using namespace std;


int main() {
	
    string studentName;
    float mark1,mark2,mark3;
    float total,average;

    cout<<"Enter student name:";
    getline(cin,studentName);

    cout<<"Enter first mark:";
    cin>>mark1;

    cout<<"Enter second mark:";
    cin>>mark2;

    cout<<"Enter third mark:";
    cin>>mark3;

    total=mark1+mark2+mark3;
    average=total/3;

    cout<<"\nStudent Name:"<<studentName<<endl;
    cout<<"Total Marks:"<<total<<endl;

    cout<<"Average:"<<average<<endl;


	return 0;
}