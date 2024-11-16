#include <stdio.h>
#define ARRAY_LENGHT 10
void printArray( int *a, int l ); 
void swap( int *a, int i, int j); 
void insectionSort (int *a, int l); 
void shellsort(int *a, int l); 
int main() 
{
				int a[] = {1,2,6,5,9,8,7,3,0,4};
				printArray(a, ARRAY_LENGHT);
				shellsort(a, ARRAY_LENGHT);
				printArray(a, ARRAY_LENGHT);
				return 1;
}
void printArray( int *a, int l ) 
{
				for ( int i = 0 ; i < l ; i ++ )
								printf("%d ", a[i]);
				printf("\n");
}
// this function changes i for j;
void swap( int *a, int i, int j) 
{
				int bucket = a[i];
				a[i] = a[j];
				a[j] = bucket;
}
// The shell sort uses the insection sort.
void insectionSort (int *a, int l) 
{
				for (int i = 0 ; i < l ; i ++ ) 
				{
								for ( int j = 0 ; j < l ; j ++ )
												if (a[i] < a[j])
																swap(a, i, j);
				}
}
void shellsort(int *a, int l) 
{
				int h, he;
				h = 2;
				while(h % 2 != 0) 
				{
								
				}

}


