#include <iostream>
double average(double a,double b);
int main()
{
	using namespace std;
	double x,y,z;
	cout<<"Please input two numbers: ";
	while(cin>>x>>y)
	{
		if (x==0 || y==0)
		{
			break;
		}
		else
		{	
			z=average(x,y);
		}
		cout<<z<<endl;
	}
	return 0;
}

double average(double a,double b)
{
	double z;
	z=2.0*a*b/(a+b);
	return z;
}