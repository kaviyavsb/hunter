#include <stdio.h>
int main(void) {
	int a[10],i,n,j,count=0,temp,b[10],k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
  if(a[i]==i)
	{
	++count;
	if(count>0)
	{
	k++;
	b[k]=a[i];
    }}
    for(i=1;i<=k;i++)
	{for(j=i+1;j<=k;j++)
	{
	if(b[i]>b[j])
	{
	temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	}
	}}
	for(i=1;i<=k;i++)
	{
	printf("%d\n",b[i]);
	}
    if(count==0)
    printf("'-1'");
return 0;
}
