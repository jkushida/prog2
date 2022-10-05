// 自己参照構造体のnextを確認するためのコード
// Python Tutorで動作を確認すること

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

int main(){
	int key;
	node_t *head; // リストの先頭を指すポインタ
	head = NULL; // 最初はリストは空なので，headにNULLを設定

	head = add_node_tail(101, "Tanaka", head);
	head = add_node_tail(102, "Yamada", head);
	head = add_node_tail(103, "Itou", head);
	head = add_node_tail(104, "Satou", head);
	head = add_node_tail(105, "Abe", head);
	
	printf("%d\n", head->key);
	printf("%d\n", head->next->key);
	printf("%d\n", head->next->next->key);
	
	printf("headを更新\n");
	head = head->next;
	printf("%d\n", head->key);
	head = head->next;
	printf("%d\n", head->key);
	head = head->next;
	printf("%d\n", head->key);
	return 0;
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
