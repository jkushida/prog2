#include <stdio.h>

int main(void){
    char st[]= "Summer";
    char *p1, *p2;                   // ポインタp1,p2の宣言
    
    p1= st;                           // p1にstのアドレスを設定 (p1=&st[0]; と書いても同様)
    printf("%c", *p1);              // p1によるstの表示 （ポインタの値を変えずに参照）
    printf("%c", *(p1+1));
    printf("%c\n", *(p1+2));
    
    p2= st;                          // p2にstのアドレスを設定 (p2=&st[0]; と書いても同様)
    printf("%c", *p2);            // p2によるstの表示 (ポインタの値を更新して参照)
    p2++;
    printf("%c", *p2);
    p2++;
    printf("%c\n", *p2);
    
    return 0;
}
