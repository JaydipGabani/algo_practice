#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
void main()
{
	int i,n;
	int arr[MAX];
	void mh(int arr[MAX],int n);
	void hs(int arr[MAX],int n);
	void display(int arr[MAX],int n);
	clrscr();
	for(i=0;i<MAX;i++)
	arr[i]=0;
	printf("\n insert?");
	scanf("%d",&n);
	printf("\n elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n elemts are");
	display(arr,n);
	mh(arr,n);
	printf("\n hepfi");
	display(arr,n);
	hs(arr,n);
	printf("heapsort");
	display(arr,n);
	getch();
}
void mh(int arr[MAX],int n)
{
	int i,val,j,father;
	for(i=0;i<n;i++)
	{
		val=arr[i];
		j=i;
		father=(j-1)/2;
		while(j>0&&arr[father]<val)
		{
			arr[j]=arr[father];
			j=father;
			father=(j-1)/2;
		}
		arr[j]=val;
	}
}
void hs(int arr[MAX],int n)
{
	int i,k,temp,j;
	for(i=n;i>0;i--)
	{
		temp=arr[i];
		arr[i]=arr[0];
		k=0;
		if(i==1)
		j=-1;
		else
		j=1;
		if(i>2&&arr[2]>arr[1])
		j=2;
		while(j>=0&&temp<arr[j])
		{
			arr[k]=arr[j];
			k=j;
			j=2*k+1;
			if(j+1<=i-1&&arr[j]<arr[j+1])n
			j++;
			if(j>i-1)
			j=-1;
		}
		arr[k]=temp;
	}
}
void display(int arr[MAX],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n %d",arr[i]);
}