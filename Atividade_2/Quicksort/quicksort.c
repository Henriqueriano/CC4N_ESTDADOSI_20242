#include <stdio.h>
#define ARRAY_LENGTH 10
void printArray( int* a, int l ); 
void quicksort( int* a, int l, int p ); 
void swap ( int* v, int i, int j );
void sortPartition( int *a, int minIndex, int maxIndex );
int main ( int argc, char argv[] ) 
{
				int a[] = {50,2,10,0,3,40,7,6,9,8};
				printArray(a, ARRAY_LENGTH);
				quicksort(a, ARRAY_LENGTH, 2);
				printArray(a, ARRAY_LENGTH);
				return 1;
}
void quicksort( int* a, int l, int p ) 
{
				int indexP;
				for ( int i = 0 ; i < l ; i ++ ) 
								if (a[i] == p)
												indexP = i;
				sortPartition(a, 0, indexP - 1);
				sortPartition(a, indexP + 1, l);

				//Now realoc the pivor;
				for ( int i = 0 ; i < l ; i ++ )
								sortPartition(a, 0, l);
}
void printArray( int* a, int l ) 
{
				for (int i = 0 ; i < l ; i ++ )
								printf("%d ", a[i]);
				printf("\n");
}					
// This function changes the i for j;
void swap ( int* v, int i, int j ) 
{
				int bucket = v[i];
				v[i] = v[j];
				v[j] = bucket;
}
void sortPartition( int *a, int minIndex, int maxIndex ) 
{
				if (minIndex != maxIndex)
				for ( ; minIndex < maxIndex ; minIndex ++)
								if ( a[minIndex] > a[ minIndex + 1] )
												swap(a, minIndex, minIndex + 1);
				else
								if ( a[minIndex] > a[maxIndex] )
												swap(a, minIndex, maxIndex);
}
// Rapaz, funcionou viu.
