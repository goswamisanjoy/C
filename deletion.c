#include<stdio.h>
int main()
{
int n,i,pos,num,A[30];
printf("\nEnter the no. of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter element %d:",i+1);
scanf("%d",&A[i]);
}
printf("\nEnter the position and value to be deleted:");
scanf("%d%d",&pos,&num);
for(i=pos-1;i<n-1;i++)
{
A[i]=A[i+1];
}
printf("The array after deletion is :"\n);
for(i=0;i<n-1;i++)
{
printf("%d\t",A[i]);
}
return 0;
}


