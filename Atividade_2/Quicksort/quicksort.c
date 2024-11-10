#include <stdio.h>
#define ARRAY_LENGTH 10
void printArray( int* a, int l ); 
int main ( int argc, char argv[] ) 
{
				int a[] = {1,5,2,0,3,4,7,6,9,8};
				printArray(a, ARRAY_LENGTH);
				return 1;
}
void quicksort( int* a, int l, int p = 0 ) 
{
			int ray = l;
			for ( int i = 0 ; i < l ; i ++ ) 
			{
				ray = (int)(l - (ray / 2));
				for ( int j = 0 ; j < ray ; j ++ ) 
				{
								if ()
				}
			}
								
}
void printArray( int* a, int l ) 
{
				for (int i = 0 ; i < l ; i ++ )
								printf("%d ", a[i]);
}						
void swap ( int* v, int i, int j ) 
{
				int bucket = v[i];
				v[i] = v[j];
				v[j] = bucket;
}
