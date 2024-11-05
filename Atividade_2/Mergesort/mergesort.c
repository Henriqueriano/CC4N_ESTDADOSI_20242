#include <stdio.h>
#define ARRAY_LENGHT 5
void printArray( int* v, int l ); 
int main( int arg, int args[] )
{
				int v[ARRAY_LENGHT] = {5,3,4,2,1};
				printArray( v, ARRAY_LENGHT );
				return 1;
}
void swap( int* v, int i, int j ) 
{
	int bucket = v[i];
	v[i] = v[j];
	v[j] = bucket;
}
void mergesort( int* v, int l ) 
{

				for ( int i = 0 ; i < l ; i ++ ) 
								for ( int j = 0 ; j < l ; j ++ ) 
								{
																
								}
}
void printArray( int* v, int l ) 
{
				for ( int i = 0 ; i < l ; i ++ ) 
				{
								printf("%d ", v[i]);
				}
				printf("\n");
}
