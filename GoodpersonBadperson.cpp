#include <iostream>

using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int i,c=0,s=0;
        cin>>n>>k;
        string q;
        cin>>q;
        for(i=0;i<n;i++)
        {
            if(q[i]>='a' && q[i]<='z')
                c++;
            else
                s++;
        }
        if(c<=k && s<=k)
        {
            cout<<"both"<<endl;
        }
        else if(c<=k)
            cout<<"brother"<<endl;
        else if(s<=k)
            cout<<"chef"<<endl;
        else
            cout<<"none"<<endl;
    }
}
