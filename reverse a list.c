#include <stdio.h>
int main(void) {
	int a[10],n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=n;i>=1;i--)
	printf("%d\t",a[i]);
	return 0;
	}
