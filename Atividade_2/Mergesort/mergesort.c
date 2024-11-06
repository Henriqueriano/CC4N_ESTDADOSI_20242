#include <stdio.h>
#define ARRAY_LENGHT 9
void printArray( int* v, int l ); 
void mergesort( int* v, int l ); 
int main( int arg, int args[] )
{
				int v[ARRAY_LENGHT] = {5,3,4,2,1,7,6,8,9};
				printArray( v, ARRAY_LENGHT );
				mergesort(v,ARRAY_LENGHT);
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
				int ray, temp = 0;
				for ( int i = 0 ; i < l ; i ++ ) 
				{
								ray = (int)((l - temp) / 2);
								temp = ray;
								for ( int j = 0 ; j < (l - ray) ; j ++ ) 
								{
											if ( v[j] > v[i] )
															swap(v,i,j);
								}
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
