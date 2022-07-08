#include <stdio.h>

int main()
{
   int x=0,y=0;
   
   int n;
   scanf("%d",&n);
   
   char c='R';
   
   int dist=10;
   
   while(n--){
       
       switch(c){
           
           case 'R':
           x= x+dist;
           dist= dist+10;
           c='U';
           break;
           
           case 'U':
           
           y= y+dist;
           dist=dist+10;
           c='L';
           break;
           
           case 'L':
           x= x-dist;
           dist=dist+10;
           c='D';
           break;
           
           case 'D':
           y=y-dist;
           dist=dist+10;
           c='A';
           break;
           
           case 'A':
           x=x+dist;
           dist=dist+10;
           c='R';
           break;
           
       }
   }
   
   printf("%d %d",x,y);

    return 0;
}