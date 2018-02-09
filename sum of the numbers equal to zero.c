#include <stdio.h>
int main(void) {
	int a[10],n,i,j,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
	sum=a[i]+a[j];
	if(sum==0)
	printf("%d %d",a[i],a[j]);
	}
  if(sum!=0)
	printf("there is no numbers");
	return 0;
}
