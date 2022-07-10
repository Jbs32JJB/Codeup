	#include <stdio.h>
	int main()
	{
		char a[100];
		scanf("%s",a);
		int x;
		for(int i=0; i<99; i++)
		{
			if(a[i]==0)
			{
				x = i;
				break;
			}
		}
		for(int l=x-1; l>=0; l--)
		{
			printf("%c",a[l]);
		}
		return 0;
	}