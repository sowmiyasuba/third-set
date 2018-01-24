#include <stdio.h>
int main()
{
int min,hour,n;
	printf("enter the mintues:\n");
	scanf("%d",&min);
	hour=min/60;
            n=min%60;
            printf(" the hour and min are %d  %d",hour,n);

return 0;
}
