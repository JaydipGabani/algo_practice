#include<iostream>

using namespace std;
int main()
{
    int a[10],i,j,t,m;
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++)
    {
        m=i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[m])
            {
                m=j;
            }
        }
        t=a[i];
        a[i]=a[m];
        a[m]=t;
    }
    for(i=0;i<6;i++)
        cout<<a[i]<<" ";
}
