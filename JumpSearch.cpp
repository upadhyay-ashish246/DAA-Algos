#include<iostream>
#include<math.h>
using namespace std;
int jumpSearch(int a[],int n,int key)
{
    int jump=sqrt(n);
    int multiplier=1;
    while(jump*multiplier<n)
    {
        if(a[jump]==key)
        {
            return jump;
        }
        else if(a[jump]>key)
        {
            for(int i=jump*multiplier-jump;i<jump*multiplier;i++)
            {
                if(a[i]==key)
                {
                    return i;
                }
            }
        }
        multiplier++;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5};
    int key=3;
    int n=sizeof(a)/sizeof(a[0]);
    int result=jumpSearch(a,n,key);
    if(result==-1)
    {
        cout<<"Key not found.";
    }
    else{
        cout<<"Key found at index : "<<result;
    }
    return 0;
}