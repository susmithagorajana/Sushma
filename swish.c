#include<stdio.h>
int main()
{
  int X,P,y,sum=0;
  scanf("%d %d",&X,&P);
  y=X;
  while(X>1)
  {
     y=P*X/100;
     sum=sum+X;
     X=X-y;
  }
  printf("%d",sum);
 }
