#include <stdlib.h>
#include <stdio.h>
#define LENGHT_ARRAY 10
void seeTheVetor( int* v, int l ) ;
void bubbleSort ( int* v, int l  );
int main( int arg, int args[] ) 
{
	int v[ LENGHT_ARRAY ] = { 9,7,8,10,6,5,3,4,2,1 };
	printf( "Array before bubble sort: "           );
	seeTheVetor(v, LENGHT_ARRAY);
	printf("\nArray after bubble sort: "           );
	bubbleSort( v, LENGHT_ARRAY                    );
	seeTheVetor(v, LENGHT_ARRAY);
	return 1                                        ;
}
void bubbleSort( int* v, int l ) 
{
	int temp;
	for ( int i = 0 ; i < l ; i ++ ) 
	{
		for ( int j = i + 1 ; j < l ; j ++ ) 
		{
			if ( v[j] < v[i] ) 
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}	
}
void seeTheVetor(int* v, int l) { for ( int i = 0 ; i < l ; i ++ ) printf("%d ", v[i]); printf("\n"); }

