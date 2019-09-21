#include<stdio.h>
int main()
{
int i,n,j;
printf("enter an number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=i*n;
printf("%d*%d=%d\n",i,n,j);
}
return 0;
}
