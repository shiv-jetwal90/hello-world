#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005]={0},c[100005]={0};
int main()
{
    int n,i,j,q,z,l=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[l]==a[i])
        {
            c[l]++;
        }
        else
        {
        l=i;
        i--;
        }

    }
     for(i=0;i<n;i++)
     {
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                b[j]+=c[i];
            }
        }
        b[a[i]]+=c[i];
        b[1]+=c[i];
        i=i+c[i]-1;
     }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>z;
        cout<<b[z]<<endl;
    }
}
