// d3-4.c 解答
#include <stdio.h>
#include <string.h>

typedef struct{ // 学生情報
    int no;
    char name[8];
    int score[3];
    double average;
    char hantei[10];
    
}student_dt;

void print_one_data(student_dt sp);
void seiseki_syori(student_dt *sp);

#define N 5

int main(){
    int i;
    student_dt info[N] = {
        {101, "Sakata", {90, 60, 65}, 0, "-"},
        {102, "Tanaka", {56, 65, 78}, 0, "-"},
        {103, "Sasaki", {92, 89, 58}, 0, "-"},
        {104, "Yamada", {35, 45, 67}, 0, "-"},
        {105, "harada", {23, 87, 36}, 0, "-"},
    };
    printf("成績処理前\n");
    for(i=0; i<N; i++)
        print_one_data(info[i]);
    
    // 配列score[3]の要素の平均からhanteiを決定する.
    for(i=0; i<N; i++)
        seiseki_syori(&info[i]);
    
    printf("成績処理後\n");
    for(i=0; i<N; i++)
        print_one_data(info[i]);
    return 0;
}

// 一人分のデータを表示する関数
void print_one_data(student_dt sp){
    int i;
    printf("%s ", sp.name);
    
    for(i=0;i<3;i++)
        printf("%d ", sp.score[i]);
    
    printf("%.1f ", sp.average);
    printf("%s \n", sp.hantei);
}

void seiseki_syori(student_dt *sp){
    int i;
    double sum=0;
    for(i=0;i<3;i++)
        sum += sp->score[i];
    sp->average=sum/3.0;
    if(sp->average >= 60)
        strcpy(sp->hantei, "合格");
    else
        strcpy(sp->hantei, "不合格");
}
