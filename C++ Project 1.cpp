#include <cmath>
#include <iostream>

using namespace std;

double quadFormula(int a,int b,int c)
{ 
	double d;
	d=(b*b)-(4*a*c);
	
	double root;
	root=sqrt (d);
	
	return d;
}
int main()
{
	int a,b,c;

	cout << "please enter an integer value for a:" << endl;
	cin >> a;
	cout << "please enter an integer value for b:" << endl;
	cin >> b;
	cout << " please enter an integer value for c:"	<< endl;
	cin >> c;
	
	double z = quadFormula(a,b,c);
	if(z == 0)
	{
		cout << "There is one real root" << endl;
	}
	if(z > 0)
	{
		cout << "There are two real roots" << endl;
	}
	if(z < 0)
	{
		cout << "There are two complex roots" << endl;
	}
	double answerOne = (-b + z)/(2 * a);
	double answerTwo = (-b - z)/(2 * a);
	
	cout << "Answer is positive: " << answerTwo << " or negative: " << answerOne << endl;


	return 0; 
}
