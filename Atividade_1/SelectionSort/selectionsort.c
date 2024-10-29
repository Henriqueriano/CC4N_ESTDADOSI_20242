#include <stdio.h>
#define ARRAY_LENGHT 10
void seeArray( int* v, int l );
void selectionSort( int* v, int l );
int main( int arg, int args[] ) 
{
	int v[ARRAY_LENGHT] = {10,8,4,5,3,1,7,6,9,2};
	printf("Array before sort: ");
	seeArray(v, ARRAY_LENGHT);
	printf("\nArray after sort: ");
	selectionSort(v, ARRAY_LENGHT);
	seeArray(v, ARRAY_LENGHT);
	printf("\n");
	return 1;	
}
void selectionSort( int* v, int l )
{
	int bucket;
	for ( int i = 0 ; i < l ; i ++ )
		for ( int j = i + 1 ; j < l ; j ++ ) 
		{
			if( v[j] < v[i] ) 
			{
				bucket = v[i];
				v[i] = v[j];
				v[j] = bucket;
			}
		}

}
void seeArray( int* v, int l) {for ( int i = 0 ; i < l ; i ++ ) printf( "%d ", v[i] ); }
