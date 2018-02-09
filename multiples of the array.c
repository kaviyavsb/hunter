#include <stdio.h>
int main(void) {
	int a[10],n,i,mul=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	mul=mul*a[i];
	}
	printf("%d\t",mul);
	return 0;
	}
