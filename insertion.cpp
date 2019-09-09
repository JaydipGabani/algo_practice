#include<iostream>

using namespace std;
int main()
{
    int a[10],i,j,t,m;
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++)
    {
        m=a[i];
        for(j=i-1;j>0&&a[j]>m;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=m;
    }
    for(i=0;i<6;i++)
        cout<<a[i]<<" ";
}

