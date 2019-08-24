//program to check given strings are anagrams or not
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100],str2[100];
   	printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	char k; //k is temporary variable for swapping in sort fuction

   	int i, j;
   	int n1  = strlen(str1);
   	int n2 = strlen(str2);

//check the length of both strings is equal or not 
//if length no equal then strings are not anagrams

   	if(n1!=n2)
	{    
      		printf("%s and %s are not anagrams\n",str1,str2);
      	return 0;
   	}
   
//sort the strings
	for (i=0;i<n1-1;i++)
	{
      	for (j=i+1;j<n1;j++)
	{
        	if (str1[i]>str1[j]) 
            	{	
			k=str1[i];
            		str1[i]=str1[j];
            		str1[j]=k;
         	}
         	if (str2[i]>str2[j])
		{
            		k=str2[i];
            		str2[i]=str2[j];
            		str2[j]=k;
		}
      	}
	}


//Compare both strings

	for(i=0;i<n1;i++) 
	{
     		if(str1[i]!=str2[i]) 
		{    
         		printf("Strings are not anagrams \n",str1,str2);
         		return 0;
      		}
   	}

	printf("Strings are anagrams\n");
   	return 0;
}
