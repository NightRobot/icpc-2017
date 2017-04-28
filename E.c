#include <stdio.h>
#include <string.h>

int main()
{
  char input[60] = "0850893085";
  char check_str2[3];
  char str2[60][3];
  int count_str2[50];
  int index_str2 = 0
  int index=0;

  for(int i=0;i < strlen(input)-1;i++){
    check_str2[0] = input[i];
    check_str2[1] = input[i+1];
    check_str2[2] = 0;
    printf("%s",check_str2);
    printf("\n");
    if(strstr(input,check_str2)!=NULL){
      index = 0
      while ( index < 60 && (strcmp(a[index],check_str2)!=0) ){
        index++;
      }
      if(index==59){
        str2[index_str2] = check_str2;
        coun_str2[index_str2]++;
        index_str2++;
      }
      else{
        coun_str2[index]++;
      }
    }
  }
}
