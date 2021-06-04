#include <iostream>
using namespace std;
int main()
{
    int n;cout<<"enter n";
    cin>>n;
	int a=0,b=1,c=1;
	cout<<a<< " ";
	if(n>1)
		cout<<b<<" ";
	if(n>2)
		cout<<c<<" ";
	for(int i=3;i<n;i++)
	{
		int d=a+b+c;
		a=b;
		b=c;
		c=d;
		cout<<d<<" ";
	}
	return 0;
}