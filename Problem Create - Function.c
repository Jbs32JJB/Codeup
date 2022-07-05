	#include <stdio.h>
	void Do(int n);
	void Re(int n);
	void Mi(int n);
	void Fa(int n);
	void Sol(int n);
	void Ra(int n);
	void Si(int n);
	void sd(int n);
	
	void First(int n)
	{
		
		if(n%7==1)
		{
			Do(n);
			return;
		}
		if(n%7==2)
		{
			Re(n);
			return;
		}
		if(n%7==3)
		{
			Mi(n);
			return;
		}
		if(n%7==4)
		{
			Fa(n);
			return;
		}
		if(n%7==5)
		{
			Sol(n);
			return;
		}
		if(n%7==6)
		{
			Ra(n);
			return;
		}
		if(n%7==0)
		{
			Si(n);
			return;
		}
	}

	void Do(int n)
	{
		if(n==1)
		{
			sd(n);
			printf("뿅!\n\n");
			return;
		}
		if(n!=1)
		{
			sd(n);
			n = n-3;
			Sol(n);
			return;
		}
	}
	void Re(int n)
	{
		
		sd(n);
		n = n-1;
		Do(n);
		return;
		
	}
	
	void Mi(int n)
	{
		if(n<=7)
		{
			sd(n);
			n = n-2;
			Do(n);
			return;
		}
		else
		{
			sd(n);
			n = n-3;
			Si(n);
			return;
		}
	}
	void Fa(int n)
	{
		if(n<=7)
		{
			sd(n);
			n = n-3;
			Do(n);
			return;
		}
		else
		{
			sd(n);
			n = n-1;
			Mi(n);
			return;
		}
	}
	void Sol(int n)
	{
		if(n<=7)
		{
			sd(n);
			n = n-4;
			Do(n);
			return;
		}
		else
		{
			sd(n);
			n = n-8;
			Fa(n);
			return;
		}
	}
	void Ra(int n)
	{
		
		if(n<=7)
		{
			sd(n);
			n = n-5;
			Do(n);
			return;
		}
		else
		{
			sd(n);
			n = n-1;
			Sol(n);
			return;
		}
	}
	void Si(int n)
	{
		if(n<=7)
		{
			sd(n);
			n = n-6;
			Do(n);
			return;
		}
		else
		{
			sd(n);
			n = n+1;
			Do(n);
			return;
		}
	}
	
	void sd(int k)
	{
		if(k<=7)
		{
			if(k%7==1)
				{
					printf("도(0) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(0) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(0) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(0) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(0) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(0) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(0) ");
				 	return;
				 }
		}
		if(k<=14)
		{
			if(k%7==1)
				{
					printf("도(1) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(1) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(1) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(1) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(1) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(1) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(1) ");
				 	return;
				 }
		}
		if(k<=21)
		{
			if(k%7==1)
				{
					printf("도(2) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(2) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(2) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(2) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(2) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(2) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(2) ");
				 	return;
				 }
		}
		if(k<=28)
		{
			if(k%7==1)
				{
					printf("도(3) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(3) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(3) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(3) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(3) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(3) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(3) ");
				 	return;
				 }
		}
		if(k<=35)
		{
			if(k%7==1)
				{
					printf("도(4) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(4) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(4) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(4) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(4) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(4) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(4) ");
				 	return;
				 }
		}
		if(k<=42)
		{
			if(k%7==1)
				{
					printf("도(5) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(5) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(5) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(5) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(5) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(5) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(5) ");
				 	return;
				 }
		}
		if(k<=49)
		{
			if(k%7==1)
				{
					printf("도(6) ");
					return;
				 } 
				 else if(k%7==2)
				 {
				 	printf("레(6) ");
				 	return;
				 }
				 else if(k%7==3)
				 {
				 	printf("미(6) ");
				 	return;
				 }
				 else if(k%7==4)
				 {
				 	printf("파(6) ");
				 	return;
				 }
				 else if(k%7==5)
				 {
				 	printf("솔(6) ");
				 	return;
				 }
				 else if(k%7==6)
				 {
				 	printf("라(6) ");
				 	return;
				 }
				 else if(k!=0)
				 {
				 	if(k%7==0)
				 	printf("시(6) ");
				 	return;
				 }
		}
		if(k==50)
		{
			printf("도(7) ");
			return;
		}
	}
	int main()
	{
		int n;
		scanf("%d",&n);
    printf("뭐 도가 1.. 레가 2.. 이런식으로 가는거야....\n\n");
		First(n);
    printf("코드가..악보네..?");
		return 0;
	}