#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*array[0] = 2, array[1] = 1*/
	int i[2] ;
	int result = 0;
	int length = 10;
	for ( i[0] = 2; i[0] < length; i[0]++)
	{
		for ( i[1] = 1; i[1] < length; i[1]++)
		{
			result = i[0] * i[1];
			printf("%d * %d = %d", i[0], i[1], result);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}