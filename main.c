#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define clscr() printf("\e[1;1H\e[2J")

void memory()
{
	unsigned short int level = 1; 
	unsigned short int lifes = 3;
	unsigned short int *nums;
	char ans; //answer
	
	nums = calloc(level+1, sizeof(unsigned short int)); //nums[level+1];
	srand(time(NULL));

	nums[0] = rand()%100+1; //random number between 1 - 100
	printf("First number: %d\n", nums[0]);
	getchar();

	while(lifes > 0)
	{
		clscr();

		nums[level+1] = rand()%100+1;
		printf("is that number equal to %d number(s) ago?", level);
		ans = getchar();
	}

}

int main()
{
	memory();
	return 0;
}
