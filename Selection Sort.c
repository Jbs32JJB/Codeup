	#include <stdio.h>
	int main()
	{
		int temp;
		int n;
		int a[100];
		scanf("%d",&n);
		for(int p=0; p<n; p++)
		{
			scanf("%d",&a[p]);
		}
		for(int i=0; i<n; i++)
		{
			for(int l=i+1; l<n; l++)
			{
				if(a[i]>a[l])
				{
					temp = a[i];
					a[i] = a[l];
					a[l] = temp;
				}
			}
		}
		for(int k=0; k<n; k++)
		{
			printf("%d ",a[k]);
		}
		return 0;
	}