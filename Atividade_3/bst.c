#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
				struct Node* leftNode;
				int data;
				struct Node* rigthNode;
} Node;
Node* initNode(int data); 
Node* insertNode(Node* n, int data);
short searchInTree(Node* n, int data); 
int main (int argc, char argv[]) 
{
				int e[] = {9,8,7,0,4,5,6,1,2,3};
				Node* n = initNode(9);
				for ( short i = 1; i < 9; i ++ )
								insertNode(n, e[i]);
				printf("%d",searchInTree(n,40));
				printf("\n");
				printf("%d",searchInTree(n,4));
				return 1;
}
Node* initNode(int data) 
{
				Node* newNode = (Node*)malloc(sizeof(Node));
				newNode->leftNode = NULL;
				newNode->rigthNode = NULL;
				newNode->data = data;
				return newNode;
}
Node* insertNode(Node* n, int data)
{
				if ( n == NULL ) 
				{
								n = initNode(data);
								return n;
				} 
				else if ( data <= n->data ) 
				{
								n->leftNode = insertNode(n->leftNode, data);
				}
				else
				{
								n->rigthNode = insertNode(n->rigthNode, data);
				}
				return n;
}
short searchInTree(Node* n, int data) 
{
				if (n == NULL) return 0;
				else if (n -> data == data) return 1;
				else if (data <= n->data) return searchInTree(n->leftNode,data);
				else return searchInTree(n->rigthNode,data); 
}
