#include <iostream>
#include "10_1.h"

One::One()
{
	name="No name";
	account="No account";
	money=0.0;
}

One::One(const std::string & a,const std::string & b,double n)
{
	name=a;
	account=b;
	if (n<0)
	{
		std::cout<<"It can not be!"<<std::endl;
	}
	else
		money=n;
}

One::~One()
{

}

One One::make()
{
	using namespace std;
	string name;
	string account;
	double money;
	cout<<"Please input your name!"<<endl;
	cin>>name;
	cout<<"Please input your account!"<<endl;
	cin>>account;
	cout<<"Please input your money"<<endl;
	cin>>money;
	One classone(name,account,money);
	return classone;
}

void One::show()
{
	using namespace std;
	cout<<"Name is: "<<name<<endl;
	cout<<"Accoutn is: "<<account<<endl;
	cout<<"Money is: "<<money<<endl;	
}