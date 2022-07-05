
#include<iostream>
using namespace std;
void merge(int[] ,int ,int ,int);
int mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=lb+(ub-lb)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);

        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int *b=new int[ub-lb+1];
    int k=0;
    while(i<=mid && j<=ub)
    {
        if(a[i]>a[j])
        {
            b[k++]=a[j++];
        }
        else{
            b[k++]=a[i++];
        }
    }
    while(i<=mid)
    {
        b[k++]=a[i++];
    }
    while(j<=ub)
    {
        b[k++]=a[j++];
    }
    for(int i=lb;i<=ub;i++)
    {
        a[i]=b[i-lb];
    }
}
int main()
{
    int a[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}