#include<iostream>
using namespace std;
int binary(int a[],int l,int r,int key)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==key)
            return mid;

        else if(a[mid]>key)
            return binary(a,l,mid-1,key);
        
        else
            return binary(a,mid+1,r,key );
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5};
    int key=3;
    int n=sizeof(a)/sizeof(a[0]);
    int result=binary(a,0,n,key);
    if(result==-1)
    {
        cout<<"\nKey not found.\n";
    }
    else{
        cout<<"\nKey found at index : "<<result;
    }
    return 0;
}