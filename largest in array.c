#include<stdio.h>
void main()
{
int a[20],i,n,largest;
printf("Enter the size of array:");
scanf("%d",&n);
printf("The %d elements in array are:",size);
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=0;i<=n;i++)
{
if(largest<a[i])
largest=array[i];
}
printf("Largest element in array is %d",largest);
}
