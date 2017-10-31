#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long int i,j,count=0,l1,l2,t;
    cin>>t;
    while(t--)

    {
        count=0;
        cin>>a>>b;
    l1=a.length();
    l2=b.length();
    if(l1<l2)
    {
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
            {
                if(a[i]==b[j])
                {
                    count++;
                    b[j]=' ';
                    break;
                }
            }
        }
    }
        else
        {
            for(i=0;i<l2;i++)
            {
                for(j=0;j<l1;j++)
                {
                    if(a[j]==b[i])
                    {
                        count++;
                        a[j]=' ';
                        break;
                    }
                }
            }
        }
            cout<<(l1-count)+(l2-count);
    }
}
