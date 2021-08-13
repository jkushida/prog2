#include <stdio.h>
// べき乗を計算するための関数定義
int bekijo(int c,int d)
{
    int i, calc=1;
    
    for(i=0;i<d;i++){
        calc *= c;
    }
    return calc; // 値を返すreturn文
}
 
int main()
{
    int a, b, sum;
 
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    
    // 関数を呼び出す
    sum = bekijo(a,b)+bekijo(b,a);
    
    printf("a^b + b^a = %d\n",sum);
    return (0);
}
