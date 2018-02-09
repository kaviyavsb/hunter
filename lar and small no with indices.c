#include <stdio.h>
int main(void) {
	int a[10],n,i,j,temp,i1,i2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	for(j=i+1;j<=n;j++)
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	i1=1;
	i2=n;
	printf("%d %d",i1,i2);
	return 0;
}
