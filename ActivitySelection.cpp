#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void activity(int s[],int f[],int n)
{
    int i=0;
    cout<<i<<" ";
    for(int j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int flag=0;
    int s[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }

    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-i-1;j++)
        {
            if(f[j+1]<f[j])
            {
                swap(f[j],f[j+1]);
                swap(s[j],s[j+1]);

                flag==1;
            }
        }
        if(flag==0)
            break;
    }
    activity(s,f,n);
    return 0;
}