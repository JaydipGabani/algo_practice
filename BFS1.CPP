#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
#define true 1
#define false 0
int g[size][size];
int visit[size];
int q[size];
int front;
int rear;
int n;
int main()
{
 int v1,v2;
 char ans='y';
 void create(),bfs(int v);;
 //clrscr();
 create();
 //clrscr();
 printf("the adjacent matrix for graph is\n");
 for(v1=0;v1<n;v1++)
 {
  for(v2=0;v2<n;v2++)
  {
   printf("%d",g[v1][v2]);
   }
  printf("\n");
 }
 getch();
 do
 {
  for(v1=0;v1<n;v1++)
  visit[v1]=false;
//  clrscr();
  printf("enter the vertex from which you want to traverse");
  scanf("%d",&v1);
  if(v1>=n)
  printf("invalid vertex\n");
  else
  {
   printf("the bfs of the graph is\n");
   bfs(v1);
   getch();
   }
   printf("do you wanna traverse to other\n");
   ans=getche();
   }
   while(ans=='y');
   exit(0);
  }
 void create()
 {
  int v1,v2;
  char ans='y';
  printf("\n\t\t this prog");
  printf("\nenter no of nodes");
  scanf("%d",&n);
  for(v1=0;v1<n;v1++)
  for(v2=0;v2<n;v2++)
  g[v1][v2]=false;
  printf("enter vertices starting from 0");
  do
  {
   printf("enter v1 v2");
   scanf("%d %d",&v1,&v2);
   if(v1>=n||v2>=n)
   printf("invalid");
   else
   {
   g[v1][v2]=true;
   g[v2][v1]=true;
   }
   printf("\n add more edges?");
   ans=getche();
   }while(ans=='y');
}
void bfs(int v1)
{
 int v2;
 visit[v1]=true;
 front=rear=-1;
 q[++rear]=v1;
 while(front!=rear)
 {
  v1=q[++front];
  printf("%d",v1);
  for(v2=0;v2<n;v2++)
  {
   if(g[v1][v2]==true && visit[v2]==false)
   {
    q[++rear]=v2;
    visit[v2]=true;
    }
   }
   }
  }

