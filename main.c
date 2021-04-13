#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	unsigned short *vector;
	unsigned short size = 0;
	bool nextn = true;
	char ans;

	vector = calloc(size, sizeof(unsigned short));
	printf("insert elements\n");
	
	printf("\n");

	int aux;
	while(nextn)
	{
		size++;
		vector = realloc(vector, size * sizeof(int));
		printf("> "); 
		scanf("%d", &vector[size-1]);
		printf("Do you want another number?\n");

		printf("> "); 
		scanf(" %c", &ans);

		if(ans != 's')
			nextn = false;
	}
	for(unsigned short i = 0; i < size; i++)
		printf("%d\n", vector[i]);

	free(vector);
	return 0;
}
