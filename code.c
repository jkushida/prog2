#include <stdio.h>
 
struct student{
  int no;
  char name[5];
  double average;
};
 
int main(){
  int i;
  // 構造体配列の宣言と初期化
  struct student seito2[3] = {
    {1, "Taka", 65.1},
    {2, "Kei", 56.8},
    {3, "Taro", 65.2},
  };
  
  for(i = 0; i<3; i++)
    printf("学生番号: %d,  氏名: %s,  平均点: %f\n",seito2[i].no, seito2[i].name, seito2[i].average);

  return (0);
}
