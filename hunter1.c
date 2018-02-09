#include <stdio.h>
int main(void) {
	int a[10],i,n,j,count=0,temp,b[10],k=0;
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
	k++;
	b[k]=a[i];
    printf("%d\n",b[k]);
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
	printf("%d\n",b[i]);}
    if(count==0)
    printf("unique");
return 0;
}
