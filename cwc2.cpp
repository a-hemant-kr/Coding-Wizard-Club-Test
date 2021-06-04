#include<bits/stdc++.h>
using namespace std;
int flag;
void ascending(int A[][],int p,int q)
{
   while (p>=0&&A[q][p]>flag)
            {
                arr[q][p+1]=arr[q][p];
                p=p-1;
            }
}
void descending()
{
     while (p>=0 && A[q][p]<flag)
            {
                arr[q][p+1]=arr[q][p];
                p=p-1;
            }
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    int i,j;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
    for(int j=0;j<b;j++)
    {
      cin>>arr[i][j];
    }
    }
    cin>>c;
    for(int k=0;k<a;k++)
    {       
        for (i=1;i<b;i++)
        {
            flag=arr[k][i];
            j=i-1;
            switch(c) 
            {
		    case 1 : void ascending(arr,j,k);
			         break;
		    case 2 : void descending(arr,j,k);
			         break;
            }
            arr[k][j+1] = flag;
        }
    }
    for(int i=0;i<a;i++){
    for(int j=0;j<b;j++)
    {
    cout<<arr[i][j];
    }
    cout<<endl;
    }
	return 0;
}