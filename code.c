#include <stdio.h>
#include <stdlib.h>

void func(int n);

int m = 100; //グローバル変数

int main(void)
{
    int *ip;        // int型のポインタipを宣言
    int i = 1, n = 4, m[4] = {0, 1, 2, 3};
    
    ip = (int *)malloc(n * sizeof(int));  // メモリ領域の確保
    
    free(ip);       // 確保したメモリ領域の解放
    
    func(i);
    
    for(i=0; i<4; i++)
        printf("%d ",m[i]);
    printf("\n");
    
    return 0;
}

void func(int n)
{
    int m = 3;
    n = m;
}
