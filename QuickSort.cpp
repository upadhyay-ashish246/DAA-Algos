#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int* ,int ,int );
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int pivot=partition(a,lb,ub);

        partition(a,lb,pivot);
        partition(a,pivot+1,ub);
    }
}

int partition(int a[],int lb,int ub)
{
    int i=lb-1;
    int j=lb;
    int pivot=a[ub];
    while(j<ub)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[j]);
    return i+1;
}
int main()
{
    int a[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}