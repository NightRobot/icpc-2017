#include <stdio.h>
int main()
{
   int a, x, b , y;
   int empty_b = 0;
   scanf("%d %d", &a,&x);
   scanf("%d %d", &b,&y);
   empty_b = b-y;
   if(empty_b >= x){
        y = y + x;
        x = 0;
   }else{
        x = x - empty_b;
        y = b;
   }
   printf("%d %d",x,y);
}