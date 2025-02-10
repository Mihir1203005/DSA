#include <iostream>
using namespace std;

int main()
{
	
	int num ;
	
	cout << "ENTER YOUR NUM : ";
	cin >> num;
	
	if (num==0)
	{
		cout << "NUM IS NEUTRAL...!";
	}
	else if(num<0)
	{
		cout << "NUM IS NAGATIVE...!";
	}
	else 
	{
		cout << "NUM IS POSITIVE...!";
	}
	
	return 0;
}