
/*program to find all elments in array which have atleast two greater elemnts */

#include<stdio.h>

void main()
{
    int a[20], i, j, k, n,m;
    

    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter %d array element: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array is: ");
    for(i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    printf("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

/*    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }*/
 	 for(i=0;i<n;i++)
        {
                int m=0;
                for(j=0;j<n;j++)
                {
                        if(a[j]>a[i])
                        {
                                m++;
                        }
                }
                if(m>=2)
		{
			printf("%d\n",a[i]);
                }
        }

       printf("\n");
  
}
