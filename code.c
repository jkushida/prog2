#include <stdio.h>

// 関数外で枠型の宣言
struct student{    // 学生情報
    int no;          // 学生番号
    char name[10];   // 氏名
    double average;  // 平均点
};

void func();

int main(){
    
    // main関数内で宣言と初期化
    struct student seito1 = {5, "Yamada", 85.3};
    printf("学生番号: %d,  氏名: %s,  平均点: %f\n",seito1.no, seito1.name, seito1.average);
    
    func();
    
    return 0;
}

void func(){
    
    // func関数内で宣言と初期化
    struct student seito1 = {8, "Tanaka", 34.8};
    printf("学生番号: %d,  氏名: %s,  平均点: %f\n",seito1.no, seito1.name, seito1.average);
}
