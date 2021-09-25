#include <stdio.h>

typedef struct{ // 社員情報
    int no;
    char name[8];
    double kyuuyo;
}syain_dt;

void print_one_data(syain_dt sp);

int main(){
    int i, no = -1;
    syain_dt ics[5] = {
        {101, "Sakata", 300000},
        {102, "Tanaka", 500000},
        {103, "Sasaki", 450000},
        {104, "Yamada", 250000},
        {105, "harada", 370000},
    };
    
    printf("検索したいnoを入力 ");
    scanf("%d", &no);
    
    for(i=0; i<5; i++){
        if(no == ics[i].no)
            break;
    }
    
    if( i  < 5)
        print_one_data(ics[i]);
    else
        printf("見つかりませんでした．\n");
    
    return 0;
}

// 一人分のデータを表示する関数
void print_one_data(syain_dt sp){
    printf("%d \t %s \t %.1f\n",sp.no,  sp.name,  sp.kyuuyo);
}
