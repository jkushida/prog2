// e1-7.c 解答
#include <stdio.h>

struct  member{
    int     no;          // 番号
    char    name[10];    // 氏名
    int     age;         // 年齢
    int     exp;         // 勤務年数
};

void disp(struct member *p);

char *fname = "meibo2.csv";

int main(void)
{
    int i;
    FILE *fp;
    struct  member p[5]={
        {1, "田中", 21, 4},
        {2, "山田", 19, 3},
        {3, "坂本", 20, 5},
        {4, "岡本", 30, 10},
        {4, "佐藤", 50, 18}
    };
    
    // 最初ファイルを書き込み専用で開き，閉じることで中身をクリアする
    fp = fopen(fname,"w");
    fclose(fp);

    for(i=0;i<5;i++){
        disp(&p[i]);
    }
    
    return 0;
}

void disp(struct member *p)
{
    FILE *fp;
    int i;
    
    /* 追加書き込みでファイルを開く*/
    /* コードを書く*/
    fp = fopen(fname,"a");
    
    /* データ一件分を表示 */
    /* コードを書く*/
    fprintf(fp, "%d, %s, %d, %d\n",p->no, p->name, p->age, p->exp);
    
    printf("一件分のデータを書き込み\n");
    fclose(fp);
}
