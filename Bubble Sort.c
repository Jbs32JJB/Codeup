	#include <stdio.h>
	int main()
	{
		int temp;
		int a[100];
		int m;
		scanf("%d",&m);
		for(int i=0; i<m; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int l=0; l<m; l++)
		{
			for(int k=0; k<m-l; k++)
			{
				if(a[k]>a[k+1])
				{
					temp = a[k];
					a[k] = a[k+1];
					a[k+1] = temp;
				}
			}
		}
		for(int n=1; n<=m; n++)
		{
			printf("%d ",a[n]);
			
		}
		return 0;
		
	}