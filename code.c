#include <stdio.h>

int main(void){
  int num = 20;
  int i = 1;

  printf("数値=%dの約数を求める\n", num);

  do{
    if (num % i == 0){
      printf("約数=%d\n", i);
    }

    i++;
  }while (i <= num);

  return 0;
}
