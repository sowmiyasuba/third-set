#include <stdio.h>

int main()
{
int i,n,temp,j;
float median,a[n],t;
printf("Enter the size:");
scanf("%d",&n);
printf(" the %d elements are:",n);
for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("input array is \n");
for(i=0;i<=n;i++)
{
printf("%f\n",a[i]);
}
for(i=0;i<=n-1;i++)
{
    for(j=0;j<(n-i);j++)
    {
        if(a[j]<=a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
if(n%2==0)
median=(a[n/2]+a[n/2+1])/2.0;
else
median=a[n/2+1];

    
    for(i=0;i<=n;i++)
    {
    printf("%f",a[i]);
    printf("median is %f is \n",median);
    
    }
}
    return 0;
}
}
