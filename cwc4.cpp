    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n,c=0;
        cout<<"enter n"; 
        cin>>n;
        int s=n*n;
        int n1=n;

        while(n>0)
        {
            if(n%10!=s%10)
            {    
                        c=1;
                        break;
                    }
            n=n/10;
            s=s/10;
        }
        if(c==1)
            cout<<n1<<" is not automorphic";
        else
            cout<<n1<<" is automorphic";
        return 0;
    }