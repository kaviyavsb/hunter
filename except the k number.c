#include <stdio.h>
int main(void) {
	int a[10],n,i,k,count=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	if(a[i]!=k)
	++count;
	
	}
	if(count>0)
	printf("%d\t",a[i]);
	else
	printf("empty");
	return 0;
}
