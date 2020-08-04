#include <iostream>
#include <string>
using namespace std;
void main()
{
	string fname , lname;
	int Salary, Sale ,commission,Total;

	cout <<"***Homework 2***********"<<endl;
	cout <<"Enter name       : ";
	cin >> fname >> lname;
	cout <<"Enter Salary     : ";
	cin >> Salary ;
	cout <<"Enter Sale       : ";
	cin >> Sale ;
	cout <<"Enter Commission percent : ";
	cin >> commission ;
	Total = (Sale*commission/100)+Salary;
	
	cout <<"--------output---------------------"<<endl;
	cout <<"Your name = " <<fname <<" "<< lname <<endl ;
	cout <<"Total Revenue  " << Total <<" Bath"<<endl;
	cout <<"-------------------------------------"<<endl;

	system ("pause");
	//burapa janthong 6306021621022 sec B

}