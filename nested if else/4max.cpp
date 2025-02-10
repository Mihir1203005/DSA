#include<iostream>
using namespace std;

int main ()
{
	int a,b,c,d;
	
	cout << "enter value of a: ";
	cin >> a;
	
	cout << "enter value of b: ";
	cin >> b;
	
	cout << "enter value of c: ";
	cin >> c;
	
	cout << "enter value of d: ";
	cin >> d;
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout << "A IS MAX...";
			}
			else 
			{
				cout << "D IS MAX...";
			}
		}
		else
		{
			if(c>d)
			{
				cout << "C IS MAX...";
			}
			else
			{
				cout << "D IS MAX...";
			}
			
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout << "B IS MAX...";
			}
			else 
			{
				cout << "D IS MAX...";
			}
		}
		else
		{
			if(c>d)
			{
				cout << "C IS MAX...";
			}
			else
			{
				cout << "D IS MAX...";
			}
		}
	}
	return 0;
}