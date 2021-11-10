// f3-2.cのコード
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 自己参照構造体の宣言
typedef struct node {
    int key;
    char name[7];
    struct node *next;
}node_t;

// リストの末尾にデータを追加する関数
node_t *add_node_tail(int key, char name[7], node_t *head);

// リストのデータを先頭から順に表示する関数
void print_node(node_t *head);

// 引数keyに一致するデータを検索し削除する関数
node_t * delete_data(node_t *p, int key);

int main(){
    int key;
    node_t *head; // リストの先頭を指すポインタ
    head = NULL; // 最初はリストは空なので，headにNULLを設定

    head = add_node_tail(101, "Tanaka", head);
    head = add_node_tail(102, "Yamada", head);
    head = add_node_tail(103, "Itou", head);
    head = add_node_tail(104, "Satou", head);
    head = add_node_tail(105, "Abe", head);

    printf("削除前\n");
    // リストのデータを表示
    print_node(head);

    printf("削除したいデータのkeyを入力してください -> ");
    scanf("%d", &key);
    head = delete_data(head, key);

    printf("\n削除後\n");
    // リストのデータを表示
    print_node(head);

    return 0;
}

node_t * delete_data(node_t *p, int key){
    node_t *h = p;
    if(p->key == key){  // 削除データが先頭

        // 先頭を飛ばして次のノードをheadにする
        return p->next;

    }
    else{  // 削除データが先頭以外
        while(p!=NULL){

            // 削除データの手前までポインタを進める
            if (p->next->key == key){

                //　現在のノードから削除データを飛ばしたノードに繋ぐ
                p->next = p->next->next;
                return h; // headは変わらない
            }
            p = p->next;
        }
    }

}

node_t *add_node_tail(int key, char name[7], node_t *h){
    node_t *p;
    node_t *head=h;

    // ノード一つ分のデータ領域を確保
    if((p = (node_t *)malloc(sizeof( node_t)))==NULL){
        printf("malloc error");
        exit(1);
    }

    // 生成したノードにデータを代入
    p->key = key;
    strcpy(p->name, name);
    p->next = NULL;

    if(head==NULL){  // まだリストが空の場合
        return p;  // headを更新
    }
    else{ // リストに既にデータがある場合

        // リストの末尾までポインタを進める
        while(h->next!=NULL){
            h = h->next;
        }
        h->next = p;

        return head; // headはそのまま
    }

}

void print_node(node_t *p){

    printf("ID, name\n");
    while(p!=NULL){
        printf("%d %s\n",p->key, p->name);
        p = p->next;
    }
}
