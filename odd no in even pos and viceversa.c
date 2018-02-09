#include <stdio.h>
int main(void) {
	int a[10],n,i,j,count=0,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	printf("the odd numbers in an even position\n");
	for(i=1;i<=n;i++)
	{
	if((i%2==0)&&(a[i]%2!=0))
	printf("%d\t\n",a[i]);
	}
	printf("the even numbers in an odd position\n");
	for(i=1;i<=n;i++)
	{
	if((i%2!=0)&&(a[i]%2==0))
	printf("%d\t",a[i]);
	}
	return 0;
}
