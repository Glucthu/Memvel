#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

#define clrscr() printf("\e[1;1H\e[2J")

void print_game_gui_header(unsigned short int lives, unsigned short int points){
	clrscr();
	printf("Lives: %d\n", lives);
	printf("Points: %d\n", points);
	printf("\n");
}

bool ask_for_char(){
	char include_char_ans;


	while(	include_char_ans != 'n' && include_char_ans != 'N' &&
		include_char_ans != 's' && include_char_ans != 'S' ) {
		printf("Include letters and symbols? (y/n): ");
		scanf(" %c", &include_char_ans);
	}

	if(include_char_ans == 's' || include_char_ans == 'S')
		return true;
	return false;
}

void game()
{
	const unsigned short int questions_per_level = 25;
	unsigned short int n;
	bool include_char;
	unsigned short int lives = 3;
	unsigned short int points = 0;
	unsigned short int current_question = 0;
	unsigned short int max_rnum = 9; //max random number
	char *item_list;
	char ans; //answer
	
	item_list = calloc(questions_per_level, sizeof(char)); //nums[questions_per_level];
	srand(time(NULL));

	item_list[0] = rand()%max_rnum+1; //random number between 1 - 5
	//clrscr();
	//printf("First number: %d\n", item_list[0]);
	//getchar();

	printf("Value of n: "); scanf("%hu", &n);
	include_char = ask_for_char();

	//while(lives > 0)
	//{
		//print_game_gui_header(lives, points);
		//item_list[current_question] = rand()%max_rnum+1;


		/*
		clrscr();
		printf("Lifes: %d\n", lifes);
		printf("Points: %d\n", points);
		printf("\n");
		*/
		//nums[level] = rand()%max_rnum+1;
		/*printf("is %d equal to %d number(s) ago?\n", item_list[current_question], n);
		printf("> "); scanf(" %c", &ans);

		if((ans == 'y' && item_list[0] != item_list[points]) || (ans == 'n' && item_list[0] == item_list[points]))
			lives--;
		else
			points++;

		for(unsigned short int i = 0; i < points; i++)
			item_list[i] = item_list[i+1];

		if(points % (int)pow(n * 1.7, 2) == 0)
		{
			n++;
			max_rnum *= 1.3;
		}
	}*/
	
	//free(item_list);
}

int main()
{
	game();
	return 0;
}
