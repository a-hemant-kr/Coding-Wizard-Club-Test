#include<bits/stdc++.h>
using namespace std;
int main()
  { 
       int a,b,c; 
       cout<<"enter 3 numbers";
       cin>>a>>b>>c;
       cout<<"max number is "<<((a>b&&a>c)?a:(b>a&&b>c)?b:c);
       return 0;
  }