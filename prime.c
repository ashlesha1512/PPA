// PROGRAM TO FIND ALTERNATIVE PRIME ELEMENTS IN ARRAY

#include<stdio.h>
void main()
{
        int n,a[10],k=0,b[10],i,j;
        int flag=0;
        printf("Enter Size of array");
        scanf("%d",&n);
        printf("Enter Array Elements");
        for (i=0;i<n;i++)
        {
                 scanf("%d",&a[i]);
        }
	// Find Prime elements in array
        for(i=0;i<n;i++)
        {
                flag=0;
                for(j=2;j<a[i];j++)
                {
                        if(a[i]%j==0)
                        {
                                flag=1;
                                break;
                        }
                }
                if(flag==0)
                {
                        b[k]=a[i];
                        k++;
                }
        }
        printf("Alternate Prime Numbers :");
        for(i=0;i<k;i+=2)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
}
                                                    
