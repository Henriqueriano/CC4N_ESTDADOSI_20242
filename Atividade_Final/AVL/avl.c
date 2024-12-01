#include <stdlib.h>
typedef struct Node
{
				struct Node* lefthNode;
				int data;
				struct Node* rigthNode;
				int leftHeight;
				int rightHeight;
} Node;
int main(int argc, char argv[]) 
{
				return 1;
}
Node* initNode(int data) 
{
				Node* newNode = malloc(sizeof(Node*));
			  newNode->lefthNode = NULL;
			  newNode->rigthNode = NULL;
				newNode->data = data;
				newNode->leftHeight = 0;
				newNode->rightHeight = 0;
				return newNode;
}
void insertNode(Node** n, int data) 
{
				if ((*n)->data >= data)	
				{	
								Node* node = initNode(data);
								(*n)->rigthNode = node;
								(*n)->rightHeight + 1;
				} 
				else 
				{ 
								Node* node = initNode(data);
								(*n)->lefthNode = node;	
								(*n)->rightHeight + 1;
				} 
}
short balancedFactor(Node* n) { return n->leftHeight - n->rightHeight; }


