#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n; //max size ( null + enter - enter size )
	char *ch; //dynamic allocation array
	scanf("%d",&n);
	getchar(); // \n erase
	ch = (char*)malloc(sizeof(char)*(n+1)); // null + enter size allocation
	
	fgets(ch,n+1,stdin);
	ch[strlen(ch)-1] = 0; // \n to '\0' -- RemoveBSN, strlen practice func
	int size = strlen(ch); // index of NULL
	for(int i=size; i>0; i--)
	{
		if(ch[i]==' ')
		{
			printf("%s ",&ch[i+1]);
			ch[i] = 0;
		}
	}
	printf("%s",&ch[0]);
	free(ch);
	return 0;
	
	
}