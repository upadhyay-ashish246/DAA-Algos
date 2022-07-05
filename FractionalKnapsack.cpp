#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct item
{
    int value;
    int weight;
    item(int value,int weight)
    {
        this->value=value;
        this->weight=weight;
    }
};
bool cmp(struct item a,struct item b)
{
    double r1=(double)a.value/(double)a.weight;
    double r2=(double)b.value/(double)b.weight;
    return (r1>r2);
}
double fraction(int w,struct item arr[],int n)
{
    sort(arr,arr+n,cmp);
    double final=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=w)
        {
            w-=arr[i].weight;
            final+=arr[i].value;
        }

        else
        {
            final+=arr[i].value*((double)w/(double)arr[i].weight);
            break;
        }
    }
    return final;
}
int main()
{
    int w=50;
    item arr[]={{60,10},{100,20},{120,30}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Max weight that can be added is: "<<fraction(w,arr,n);
    return 0;
}