#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
#define TRUE 1
#define FALSE 0
int g[MAX][MAX];
int v[MAX];
int n;
void main()
{
	int v1,v2;
	char ans;
	void create();
	void dfs(int);
	clrscr();
	create();
	clrscr();
	printf("graph ");
	for(v1=0;v1<n;v1++)
	{
		for(v2=0;v2<n;v2++)
		printf("%d",g[v1][v2]);
		printf("\n");
	}
	getch();
	do
	{
		for(v1=0;v1<n;v1++)
		v[v1]=FALSE;
		clrscr();
		printf("trav");
		scanf("%d",&v1);
		if(v1>=MAX)
		printf("invalid");
		else
		{
			printf("the dfs");
			dfs(v1);
		}
		printf("anoth");
		ans=getch();
	}while(ans=='y');
}
void create()
{
	int ch,v1,v2,flag;
	char ans='y';
	getch();
	clrscr();
	flushall();
	for(v1=0;v1<n;v1++)
	for(v2=0;v2<n;v2++)
	g[v1][v2]=FALSE;
	printf("nodes");
	scanf("%d",&n);
	printf("starting");
	do
	{
		printf("enter verti");
		scanf("%d%d",&v1,&v2);
		if(v1>=n||v2>=n)
		printf("invalid");
		else
		{
			g[v1][v2]=TRUE;
			g[v2][v1]=TRUE;
		}
		printf("add more");
		ans=getche();
	}while(ans=='y');
}
void dfs(int v1)
{
	int v2;
	printf("%d",v1);
	v[v1]=TRUE;
	for(v2=0;v2<MAX;v2++)
	if(g[v1][v2]==TRUE && v[v2]==FALSE)
	dfs(v2);
}