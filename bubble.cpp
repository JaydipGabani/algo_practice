#include<iostream>

using namespace std;
int main()
{
    int a[10],i,j,t;
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++)
        for(j=0;j<6-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    for(i=0;i<6;i++)
        cout<<a[i]<<" ";
}
