#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cout<<"enter the size of the array ";
    cin>>n;int a[n];
    cout<<"enter the array ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    int c=0;
	for (int i=0;i<n-1;i++)
    {
		for (int j=i+1;j<n;j++)
        {
			if (a[i]>a[j])
            {
                cout<<"("<<a[i]<<","<<a[j]<<") ";
                c++;
            }
        }
    }
    cout<<"\n"<<"number of inversions are "<<c;
	return 0;
}