	#include <stdio.h>
	int main()
	{
		int a[25]={};
		int n;
		int t;
		scanf("%d",&n);
		for(int i=1; i<=n; i++)
		{
			scanf("%d",&t);
			a[t] = a[t]+1;
		}
		for(int k=1; k<=23; k++)
		{
			printf("%d ",a[k]);
		}
		return 0;
		
	}