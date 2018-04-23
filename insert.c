#include<stdio.h>
int main()
{
 int n,i,A[60],num,pos;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
 printf("Enter the number %d:",i);
 scanf("%d",&A[i]);
}
 printf("Enter the number to be inserted:");
 scanf("%d",&num);
 printf("Enter the position:");
 scanf("%d",&pos);
 for(i=n;i>=pos;i--)
{
 A[i+1]=A[i];
}
 A[pos]=num;
 n=n+1;
 printf("The insertion number:\n");
 for(i=1;i<=n;i++)
{
 printf("%d\t",A[i]);
}
 return 0;
}

