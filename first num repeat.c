#include <stdio.h>
int main(void) {
	int a[10],n,i,j,count=0,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
	if(a[i]==a[j])
	{
	++count;
	if(count==1)
	ans=a[i];	
	break;
	}
	}
	if(count==1)
	printf("%d",ans);
	else
	printf("unique");
  return 0;
}
