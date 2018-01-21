int main()
{
int i,n,a[50],temp,j;
printf("Enter the size:");
scanf("%d",&n);
printf(" the %d elements are:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("input array is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<(n-i-1);j++)
    {
        if(a[j]>a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
    printf("Sorted array is \n");
    
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
}
    return 0;
}
}

