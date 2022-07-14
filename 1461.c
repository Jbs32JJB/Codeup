    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        int x=1;
        for(int i=0; i<n; i++)
        {
            for(int j=n-1; j>= 0; j--)
            {
                a[i][j] = x++; // (n-1)*n+j
            }
        }
        for(int l=0; l<n; l++)
        {
            for(int m=0; m<n; m++)
            {
                printf("%d ",a[l][m] );
            }
            printf("\n");
        }
        return 0;
    }
