#include<bits/stdc++.h>
using namespace std;
int main()
  {    string str1,str2;
      cout<<"enter string"<<endl;
     getline(cin , str1);

  for(int n = str1.length()-1; n >= 0; n--){
    str2.push_back(str1[n]);
  }
  cout<<"Original string "<<str1<<"\n";
  cout<<"Reversed string "<<str2;
  return 0;
}

     