#include <stdio.h>
int con(char c[3]){
    if(c == "1"){
        return 1;
    }else if(c == "A"){
        return 1;
    }else if(c == "2"){
        return 2;
    }else if(c == "3"){
        return 3;
    }else if(c == "4"){
        return 4;
    }else if(c == "5"){
        return 5;
    }else if(c == "6"){
        return 6;
    }else if(c == "7"){
        return 7;
    }else if(c == "8"){
        return 8;
    }else if(c == "9"){
        return 9;
    }else if(c == "10"){
        return 10;
    }else if(c == "J"){
        return 10;
    }else if(c == "Q"){
        return 10;
    }else if(c == "K"){
        return 10;
    }
}
int main()
{
   int n;
   char c[5][3];
   int p = 0,count = 0;

   scanf("%d", &n);
   for(int i = 0; i < n ; i++){
        scanf("%s %s %s %s %s",&c[0],&c[1],&c[2],&c[3],&c[4]);
        printf("%d %d %d %d %d",c[0],c[1],c[2],c[3],c[4]);
   }
   for(int i = 0 ; i < 5 ; i++){
        p = p + con(c[i]);
   }
   
        
   printf("\n%d",p);
}
