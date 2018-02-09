#include <stdio.h>
int main(void) {
	int a[10],n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	sum=sum+a[i];
	}
	printf("%d\t",sum);
	return 0;
	}
