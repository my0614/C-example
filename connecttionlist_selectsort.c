
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 연결리스트 노드구조체 생성 
struct Node{
	int value;
	struct Node * next;
};

void delete_list(struct Node * head)
{
	struct Node * next;
	while(head)
	{
		next = head-> next;
		free(head); //  노드삭제 함수 
		head = next; 
	}
 } 
 
 void print_list(struct Node * head)
 {
 	while(head)
 	{
 		printf("%d\t", head->value); // 헤드의 값 출력 
 		head = head->next;  // 다음노드 
	}
	printf("\n"); 
 }
 
 struct Node* select_list(struct Node *head, int size)
 {
 	struct Node * key = head;
 	struct Node * node, *least;
 	int tmp;
 	// 선택정렬을 리스트로 한것 
 	for(int i=0;i<size-1; i++)
 	{
 		print_list(head);
 		node = key->next;
 		least = key;
 		for(int j = i+1; j<size;j++)
 		{
 			if(least->value > node->value)
 			{
 				least = node;
			}
			node = node -> next; 
		}
		// 값 바꿔주기 
		tmp = least->value;
		least->value = key->value;
		key->value = tmp;
		
		key = key->next;  
	}
	 
	return head; 
 }
 
 int main()
 {
 	int i, n;
 	int value;
 	struct Node *head, *tail, *point;
 	scanf("%d", &n);
 	head = tail = NULL;
 	for(i=0; i<n;i++)
 	{
 		if (scanf("%d", &value) != 1) {
			fprintf(stderr, "error\n");
			delete_list(head);
			exit(0);
		}
		else{
		 
		point = (struct Node*)malloc(sizeof(struct Node)); // 메모리 할당받기 
		point->value = value; 
		point->next = NULL;
		if(!head) // head 값이 없으면 
		{
			head = tail = point;  
		}
		else
		{
			tail->next = point;
			tail = point;
		}
	}
	 }
 	head = select_list(head,n);
 	print_list(head);
 	delete_list(head);
 	return 0;
 }
