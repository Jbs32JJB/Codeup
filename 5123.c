	#include <stdio.h>
	int main()
	{
		int a[1000];
		int b;
		int sum=0;
		scanf("%d",&b);
		for(int i=0; i<b; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int l=0; l<b; l++)
		{
			for(int k=l+1; k<b; k++)
			{
				if((a[l]+a[k])%3==0)
				{
					
					sum = sum+1;
				}
			}
		}
		printf("%d",sum);
		return 0;
	}