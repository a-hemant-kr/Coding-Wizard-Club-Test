#include<bits/stdc++.h>
using namespace std;
int main()
{   int len;
    cout<<"enter the size of the array"<<"\n";
    cin>>len;int a[len];
    cout<<"enter the array "<<"\n";
    for(int j=0;j<len;j++)
    {
        cin>>a[j];
    }
	vector<pair<int,int>> vec;
	for(int i=0;i<len;i++)
        vec.push_back(make_pair(a[i],i));
	sort(vec.begin(),vec.end());
	int c=0;
	for(int i=0;i<len;i++)
	{
		if(vec[i].second!=i)
		{
			swap(vec[i].first,vec[vec[i].second].first);
			swap(vec[i].second,vec[vec[i].second].second);
		}
        else continue;
		if(i!=vec[i].second)
        i--;c++;
	}
	cout<<"minimum number of swaps is "<<c;
	return 0;
}