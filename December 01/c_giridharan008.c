#include<stdio.h>
int main()
{
	int a[6],n,i,s=0,max,maxindex=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d\n",s);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxindex=i;
		}
	}
	printf("%d\n",maxindex);
}
