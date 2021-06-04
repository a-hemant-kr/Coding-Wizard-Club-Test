#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,o;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    cin>>arr[i][j];
    cin>>o;
    for(int k=0;k<a;k++)
    {
        int i,key,j;
        for (i=1;i<b;i++)
        {
            key=arr[k][i];
            j=i-1;
            switch(o) 
            {
		    case 1 :
            while (j>=0&&arr[k][j]>key)
            {
                arr[k][j+1]=arr[k][j];
                j=j-1;
            }
			   break;
		   case 2 :
            while (j >= 0 && arr[k][j] < key)
            {
                arr[k][j+1] = arr[k][j];
                j=j-1;
            }
			   break;
            }
            arr[k][j + 1] = key;
        }
    }
    for(int i=0;i<a;i++){
    for(int j=0;j<b;j++)
    cout<<arr[i][j];
    cout<<"\n";}
	return 0;
}