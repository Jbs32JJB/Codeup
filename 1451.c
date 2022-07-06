    #include <stdio.h>
    int main()
    {
        int n;
        int key;
        int temp;
        int a[100000];
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int k=1; k<n; k++)
        {
            key = a[k];
            for(int j=k-1; j>=0; j--)
            {
                if(a[j]>key)
                {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = key;
                }
            }
        }
        for(int m=0; m<n; m++)
        {
            printf("%d\n",a[m]);
        }
        return 0;
    }