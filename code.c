// 構造体の使用例
#include <stdio.h>

struct student{      // 学生情報
  int no;                   // 学生番号
  char name[10];   // 氏名
  double average;  // 平均点
};

int main()
{
    struct student seito1 = {5, "Yamada", 85.3};

    // 構造体の持つ情報を表示
    printf("学生番号: %d,  氏名: %s,  平均点: %f\n",seito1.no, seito1.name, seito1.average);
    return 0;
}
