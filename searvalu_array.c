#include<stdio.h>
int main()
{
int A[30],i,n,num,found=0;
printf("\nEnter the no of elements in an array:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter number %d:",i+1);
scanf("%d",&A[i]);
}
printf("\nEnter the value which is to be searched:");
scanf("%d",&num);
for(i=0;i<=n;i++)
{
if(A[i]==num)
{
found++;
printf("\nThe value %d is present in the array at position=%d\n",num,i+1);

}
}
printf("Number of times the value is present in the array : %d\n",found);
return 0;
}
