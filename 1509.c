	#include <stdio.h>
	int main()
	{
		int a[100][100];
	
		for(int i=1; i<12; i++)
		{
			for(int j=1; j<11; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=1; i<11; i++)
		{
			if(a[11][i]==1)
			{
				for(int j=10; j>0; j--)
				{
			
					if(a[j][i]>0)
					{
						printf("%d crash\n",i);
						break;
					}
					else if(a[j][i]<0)
					{
						printf("%d fall\n",i);
						break;
					}
					if(j==1)
					{
					if(a[j][i]==0)
					{
					    printf("%d safe\n",i);
					    break;
					}
					}
				}	
				
			}
		}
		return 0;
		// the code is not clear, if you solved this problem in codeup, teach me better code.
	}