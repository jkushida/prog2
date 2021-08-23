#include <stdio.h>
int main()
{
    int i, j, a[3][4] = {{0, 1, 2, 3},{5, 6, 7, 8},{10, 11, 12, 13}};
    // ポインタpの配列
    int *p1[3];
    // アドレスを設定
    for (i =0; i<3; i++)
        p1[i] = a[i];
    
    // ポインタp2を宣言しアドレスを設定
    int *p2 = a[0];

    printf("ポインタを使った間接参照1\n");
    for (i =0; i<3; i++){
        for (j =0; j<4; j++)
            printf("%d ", *(p1[i]++));
        printf("\n");
    }

    printf("ポインタを使った間接参照2\n");
    for (i =0; i<3; i++){
        for (j =0; j<4; j++)
            printf("%d ", *(p2++));
        printf("\n");
    }

    return (0);
}
