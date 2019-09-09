#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int a[10],x,i,j,min;
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++)
    {
        min=i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    cout<<endl;
    for(i=0;i<6;i++)
        cout<<a[i];
}
