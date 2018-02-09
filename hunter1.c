#include <stdio.h>
int main(void) {
	int a[10],i,n,j,count=0,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	if(a[i]==a[j])
	{
	++count;
	if(count>0)
	{
	printf("%d\n",a[i]);
	/*for(i=1;i<=i;i++)
	for(j=i+1;j<=i;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	printf("%d",a[i]);*/
	}
	}
return 0;
}
