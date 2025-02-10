#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "ENTER YOUR NUMBER : ";
	cin >> num ;
	
	if(num%7==0)
	{
		cout << "NUMBER IS DIVISIBLE BY 7!";
	}
	else 
	{
		cout << "NMBER IS NOT DIVISIBLE BY 7!";
	}
	return 0;
}