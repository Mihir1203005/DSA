#include<iostream>
using namespace std;

int main ()
{
	int a , b , c;
	cout << "enter value of a : ";
	cin >> a;
	
	cout << "enter value of b : ";
	cin >> b;
	
	cout << "enter value of c : ";
	cin >> c;
	
	
	if(a>b)
	{
		if(a>c)
		{
			cout << "A IS MAX...";
		}
		else
		{
			cout << "C IS MAX...";
		}
	}
	else
	{
		if(b>c)
		{
			cout << "B IS MAX...";
		}
		else 
		{
			cout << "C IS MAX...";
		}
	}
	return 0; 
}