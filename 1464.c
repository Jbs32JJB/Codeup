    #include <stdio.h>
    int main()
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n][m];
        int x=1;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                a[i][j] = x++; // (n-1)*n+j
            }
        }
        for(int l=0; l<n; l++)
        {
            for(int k=0; k<m; k++)
            {
                printf("%d ",a[l][k] );
            }
            printf("\n");
        }
        return 0;
    }
