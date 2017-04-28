#include <stdio.h>
#include <string.h>

int main()
{
   char input[50];
   int hole=0,point=0;
   scanf("%s", &input);
   for(int i=0;i<strlen(input);i++){
     point = 0;
     if(input[i] == '1'){
       point = 0;
     }else if(input[i] == '2'){
       point = 0;
     }else if(input[i] == '3'){
       point = 0;
     }else if(input[i] == '4'){
       point = 1;
     }else if(input[i] == '5'){
       point = 0;
     }else if(input[i] == '6'){
       point = 1;
     }else if(input[i] == '7'){
       point = 0;
     }else if(input[i] == '8'){
       point = 2;
     }else if(input[i] == '9'){
       point = 1;
     }else if(input[i] == '0'){
       point = 1;
     }
     hole = hole+point;
   }
   printf("%d",hole);
}
