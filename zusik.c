	#include <stdio.h>
	int main()
	{
		int a,b;
		double finfin;
		int x[15];
		scanf("%d",&a);
		double final=a;
		scanf("%d",&b);
		for(int i=0; i<b; i++)
		{
			scanf("%d",&x[i]);
		}
		for(int l=0; l<b; l++)
		{
			final = final + ((final)*x[l])/100;
		}
		finfin = final-a;
		printf("%.0f\n",finfin);
		if(finfin>a)
		{
			printf("good");
		}
		else if(finfin==a)
		{
			printf("same");
		}
		else if(finfin<a)
		{
			printf("bad");
		}
		return 0;
	}