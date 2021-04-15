#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define clscr() printf("\e[1;1H\e[2J")

void memory()
{
	unsigned short int level = 1; 
	unsigned short int lifes = 3;
	unsigned short int points = 0;
	unsigned short int *nums;
	char ans; //answer
	
	nums = calloc(level, sizeof(unsigned short int)); //nums[level];
	srand(time(NULL));

	nums[0] = rand()%5+1; //random number between 1 - 5
	printf("First number: %d\n", nums[0]);
	getchar();

	while(lifes > 0)
	{
		clscr();
		printf("Lifes: %d\n", lifes);
		printf("Points: %d\n", points);
		printf("\n");

		nums[level] = rand()%5+1;
		printf("is %d equal to %d number(s) ago?\n", nums[level], level);
		printf("> "); scanf(" %c", &ans);

		if((ans == 's' && nums[0] != nums[level]) || (ans == 'n' && nums[0] == nums[level]))
			lifes--;
		else
			points++;

		for(unsigned short int i = 0; i < level; i++)
			nums[i] = nums[i+1];

		if(points % 3 == 0)
		{
			level++;
			max_num *= ;
		}
	}
	
	free(nums);
}

int main()
{
	memory();
	return 0;
}
