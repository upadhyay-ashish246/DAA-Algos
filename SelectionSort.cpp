
#include<iostream>
using namespace std;
void selection(int a[],int n)
{
    int min;
    int pos;
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        min=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                pos=j;
                min=a[j];
            }
        }
        if(min!=a[i])
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
}
int main()//sorting
{
    int a[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    selection(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}