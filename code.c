// 番兵を用いた線形探索
#include <stdio.h>

int linearSearch(int data[], int n, int x) ;

int main(){
    int i, x, index, data[6] = {5, 6, 3, 1, 8, 9};
    
    printf("検索したいデータを入力してください -> ");
    scanf("%d", &x);
    
    index = linearSearch(data, 6, x);
    printf("index = %d\n", index);
}

// 線形探索法 + 番兵　配列の先頭から順番に調べていく
// 引数は探索対象の配列，配列の要素数，探索する値
int linearSearch(int data[], int n, int x) {
    int i, data2[n+1];
    for(i = 0; i < n; i++)
        data2[i] = data[i];
    data2[n] = x;
    
    i = 0;
    while(1){
        
        if(data2[i] == x )
            break;
        i++;
    }
    
    if (i == n)
        return -1;  // 見つからなければ-1を返す
    
    return i;   // 見つかればindexを返す
}

