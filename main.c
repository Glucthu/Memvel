#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *array;
  size_t used;
  size_t size;
} vector;

void initVector(vector *a, size_t initialSize) {
  a->array = malloc(initialSize * sizeof(int));
  a->used = 0;
  a->size = initialSize;
}

void insertVector(vector *a, int element) {
  if (a->used == a->size) {
    a->size *= 2;
    a->array = realloc(a->array, a->size * sizeof(int));
  }
  a->array[a->used++] = element;
}

void freeVector(vector *a) {
  free(a->array);
  a->array = NULL;
  a->used = a->size = 0;
}

int main()
{
	vector nums;
	int i;

	initVector(&nums, 1);  // initially 5 elements
	//for (i = 0; i < 100; i++)
	//  insertVector(&nums, i);  // automatically resizes as necessary
	freeVector(&nums);
	return 0;
}
