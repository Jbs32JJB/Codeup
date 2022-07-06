	#include <stdio.h>
	int main()
	{
		int a[100];
		int n;
		scanf("%d",&n);
		for(int l=0; l<n; l++)
		{
			scanf("%d",&a[l]);
		}
		int key;
		int temp;
		for(int i=1; i<n; i++)
		{
			key = a[i];
			for(int j=i-1; j>=0; j--)
			{
				if(key<a[j])
				{
					temp = a[j];
					a[j] = key;
					a[j+1] = temp;
				}
			}
		}
		for(int k=0; k<n; k++)
		{
			printf("%d ",a[k]);
		}
		return 0;
	}