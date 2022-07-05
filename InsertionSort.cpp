#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
    int min;
    int j;
    for(int i=1;i<n;i++)
    {
        min=a[i];
        j=i-1;
        while(a[j]>min && j>=0)
        {
            if(a[j]>min)
            {
                a[j+1]=a[j];
                j--;
            }
        }
        if(j!=i-1)
        { 
            a[j+1]=min;
        }
    }
}
int main()
{
    int a[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    insertion(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}