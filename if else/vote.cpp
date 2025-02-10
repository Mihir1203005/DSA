#include<iostream>
using namespace std;

int main ()
{
	int age;
	
	cout << "enter age : ";
	cin >> age;
	
//	if(age>=18)
//	{
//		cout << "YOU ARE ELIGIBLE FOR VOTE!";
//	}
//	else
//	{
//		cout << "YOU ARE NOT ELIGIBLE FOR VOTE!";
//	}

	if(age<=0)
	{
		cout << "enter valid age...";
	}
	else if (age<18)
	{
		cout << "your not eligible for vote...";
	}
	else if(age>=100)
	{
		cout << "your eligible for vote...";
	}
	else
	{
		cout << "your eligible for vote...";
	}
	
	return 0;
}