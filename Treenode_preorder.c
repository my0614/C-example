#include <stdio.h>
#include <stdlib.h>




typedef struct Tree
{
	char data;
	struct Tree* left;
	struct Tree* right;
};

Tree n1 = {'e', NULL,NULL};
Tree n2 = {'a', NULL,NULL};
Tree n3 = {'k', &n2,&n1};
Tree n4 = {'h', NULL,NULL};
Tree n5 = {'s', NULL,NULL};
Tree n6 = {'f', &n3,NULL};
Tree n7 = {'c', &n5,&n4};
Tree n8 = {'b', &n7,&n6};

Tree* root = &n8; //  트리 root 정하기
 
void inorder(Tree* root);
void preorder(Tree* root);

int main()
{
	printf("전위 순회 = ");
	preorder(root);
		
}

void preorder(Tree* root)
{
	if(root != NULL)
	{
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
