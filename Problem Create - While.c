		#include <stdio.h>
	int main()
	{
		int n;
		scanf("%d",&n); 
		int a[1000];
		int ex=0;
		int i=0;
		int l=0;
		printf("뭐 도가 1.. 레가 2.. 이런식으로 가는거야....\n\n");
		
		while(n!=1)
		{
				if(i==0)
			{
				a[i]=n;
				i++;
				continue;
			}
			if(n<=7)
			{
				n=1;
				a[i]=n;
				i++;
				ex=i;
				
				break;
			}
			if(n%7==0)
			{
				n = n+1;
				a[i] =n;
				i++;
				continue;
			}
			if(n%7==1 || n%7==3)
			{
				n = n-3;
				a[i] = n;
				i++;
				continue;
			}
			if(n%7==5)
			{
				n = n-8;
				a[i] = n;
				i++;
				continue;
			}
			if(n%7==2 || n%7==4 || n%7 ==6)
			{
				n = n-1;
				a[i]=n;
				i++;
				continue;
			}
			i++;
		}
		
		while(l<=ex)
			{
				
				if(a[l]%7==1)
				{
          
					printf("도(%d) ",a[l]/7);
          l++;
					continue;
				 } 
				 else if(a[l]%7==2)
				 {
				 	printf("레(%d) ",a[l]/7);
           l++;
				 	continue;
				 }
				 else if(a[l]%7==3)
				 {
				 	printf("미(%d) ",a[l]/7);
           l++;
				 	continue;
				 }
				 else if(a[l]%7==4)
				 {
				 	printf("파(%d) ",a[l]/7);
           l++;
				 	continue;
				 }
				 else if(a[l]%7==5)
				 {
				 	printf("솔(%d) ",a[l]/7);
           l++;
				 	continue;
				 }
				 else if(a[l]%7==6)
				 {
				 	printf("라(%d) ",a[l]/7);
           l++;
				 	continue;
				 }
				 else if(a[l]!=0)
				 {
				 	if(a[l]%7==0)
				 	printf("시(%d) ",(a[l]/7)-1);
           l++;
				 	continue;
				 }
				 l++;
				 
			}
			// while 문과 for문은 비슷함. //  
			printf("뿅!\n\n");
			printf("코드가..악보네..?");
			return 0;
	}