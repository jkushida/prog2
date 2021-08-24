
// マクロ名定義を使ったコード
#include <stdio.h>

#define SIZE 5

int main() {
    int a[SIZE];
    int i;
    
    for (i = 0; i < SIZE ; i++)
        a[i] = SIZE * i;
    
    
    for (i = 0; i < SIZE ; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    
    return 0;
}
