	#include <stdio.h>
	int main()
	{
		int a[100010];
		int x;
		int sum=0;
		int n=0;
		scanf("%d",&x);
		for(int i=0; i<x; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int j=0; j<x; j++)
		{
			if(a[j]==0)
			{
				n++;
			}
		}
		for(int l=0; l<x; l++)
		{
			if(a[l]==0)
			{
				for(int k=l-1; k>=0; k--)
				{
					if(a[k]!=0)
					{
						a[k]=0;
						n--;
						break;
					}
				}
			}
		}
		for(int b=0; b<x; b++)
		{
			if(a[b]!=0)
			{
				sum = sum+a[b];
			}
		}
		printf("%d",sum);
		return 0;
	}
