#include<iostream>
using namespace std;
int binary(int a[],int l,int r,int key)
{
    if(r>=l)
    {
        int m=l+(r-l)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]>key)
        {
            return binary(a,l,m-1,key);
        }
        else
        {
            return binary(a,m+1,r,key);
        }
    }
    return -1;
}

int exponential(int a[],int n,int key)
{
    int exp=1;
    while(exp<n)
    {
        if(a[exp]==key)
        {
            return exp;
        }
        else if(a[exp]>key)
        {
            return binary(a,exp/2,exp,key);
        }
        exp*=2;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int key=3;
    int n=sizeof(a)/sizeof(a[0]);
    int result=exponential(a,n,key);
    if(result==-1)
    {
        cout<<"Key not found.";
    }
    else{
        cout<<"Key found at index : "<<result;
    }
    return 0;
}