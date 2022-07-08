#include<stdio.h>
#include<string.h>
int main()
{
   long int n,q;
    scanf("%ld",&n);
    char str[n][30];
   
    for (int i=0; i<n; i++) 
    {
      scanf("%s",str[i]);
    }
    scanf("%ld",&q);
     char query[q][30];
    for (int i=0; i<q; i++) 
    {
      scanf("%s",query[i]);
    }

for (int i=0; i<q; i++)
{
    int count=0;
    for (int j=0; j<n; j++) 
     {
       
       int value= strcmp(query[i],str[j]);
       if (value==0) {
          count++;
        }
     }
     printf("%d\n",count);
}
 return 0;   
}