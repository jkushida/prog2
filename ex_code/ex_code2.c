#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int no;
    char name[5];
    int score1;
    int score2;
    double point;
}student_t;

void print_data(student_t *seito, int n);
void swap(student_t *a, student_t *b);

void Sort1(student_t *seito, int n);
void Sort2(student_t *seito, int n);
void Sort3(student_t *seito, int n);
void file_output_data(student_t *seito, int n);


int main()
{
    FILE *fp;
    int i, mode;
    int n = 5; // データ数
    // 構造体配列の宣言と初期化
    student_t seito[5]={
        {1001, "Taka", 75, 60, 65.1},
        {1003, "Taro", 79, 56, 67.9},
        {1004, "Jiro", 80, 67, 87.4},
        {1002, "Miki", 81, 34, 56.8},
        {1005, "Yuki", 93, 89, 95.2}
        };
    
    // ソート前のデータを表示
    print_data(seito, n);
    
    printf("select mode [1, 2, 3] ->  ");
    scanf("%d", &mode);
    
    // modeによりソートの方法を選択
    switch (mode){
        case 1:
            printf("score1で昇順にソート\n\n");
            Sort1(seito, n);
            break;
            
        case 2:
            printf("score2で降順にソート\n\n");
            Sort2(seito, n);
            break;
            
        case 3:
            printf("pointで降順にソート\n\n");
            Sort3(seito, n);
            break;
            
        default:
            printf("error -> input [1, 2, 3]\n");
            exit (1);
            
    }
    
    // ソート後のデータを表示
    print_data(seito, n);
    
    return 0;
}

// score1をキーとして昇順にソート
// バブルソート
void Sort1(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].score1>seito[j].score1)
                swap( &seito[j], &seito[j-1]);
        }
    }
}

// score2をキーとして降順にソート
// バブルソート
void Sort2(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].score2<seito[j].score2)
                swap( &seito[j], &seito[j-1]);
        }
    }
}

// pointをキーとして降順にソート
// バブルソート
void Sort3(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].point<seito[j].point)
                swap( &seito[j], &seito[j-1]);
        }
    }
}

void swap(student_t *a, student_t *b){
    student_t temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}

void print_data(student_t *seito, int n){
    int i;
    
    printf("no, name, score1, score2, point\n");
    for(i = 0; i<n; i++)
        printf("%d, %s, %d, %d, %.1f\n",seito[i].no, seito[i].name, seito[i].score1, seito[i].score2, seito[i].point);
    printf("\n");
    
}

