#include <stdio.h>
#define ARRAY_LENGTH 10 
void insectionSort( int* v, int l);
void printArray( int* v, int l );
int main( int arg, int args[] ) 
{	
	int v[ARRAY_LENGTH] = {10, 2, 8, 7, 6, 5, 4, 3, 1, 9};
	printf("Array before sorted: ");
	printArray(v, ARRAY_LENGTH);
	printf("\nArray after sorted: ");
	insectionSort(v, ARRAY_LENGTH);
	printArray(v, ARRAY_LENGTH);
	printf("\n");


	return 1; 
}

void insectionSort( int* v, int l) 
{
	int bucket;
	for ( int i = 0 ; i < l ; i++ ) 
	{
		for ( int j = 0 ; j < l ; j ++ )
		{
			if ( v[j] > v[i] ) 
			{
				 bucket = v[i];
				 v[i] = v[j];
				 v[j] = bucket;
			}
		}
	}
}
void printArray( int* v, int l ) { for ( int i = 0 ; i < l ; i ++ ) printf("%d ", v[i]); }
