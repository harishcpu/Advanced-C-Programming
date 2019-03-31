#include <stdio.h>
#include <stdlib.h>

void board(void);
int checkwin(void);

char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void main()
{
	int player, i, choice;
	char mark;

	player = 1;

	do
	{
	
		player = (player % 2)? 1 : 2;
		board();
		printf("Player %d Turn : Enter a Number : ", player);
		scanf("%d", &choice);
		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 || choice == '1')
			arr[1] = mark;
		else if (choice == 2 || choice == '2')
			arr[2] = mark;
		else if (choice == 3 || choice == '3')
			arr[3] = mark;
		else if (choice == 4 || choice == '4')
			arr[4] = mark;
		else if (choice == 5 || choice == '5')
			arr[5] = mark;
		else if (choice == 6 || choice == '6')
			arr[6] = mark;
		else if (choice == 7 || choice == '7')
			arr[7] = mark;
		else if (choice == 8 || choice == '8')
			arr[8] = mark;
		else if (choice == 9 || choice == '9')
			arr[9] = mark;
		else {
			printf("Invalid Move");
			--player;
			getc(stdin);
		}
		i = checkwin();
		player++;
	}while(i == -1);
	board();

	if (i == 1)
		printf("==>\aPlayer %d wins\n", --player);
	else
		printf("==>\aGame draw\n");
	getc(stdin);
}

void board()
{
	system("clear");
	printf("\n\n\tTick Tack Toe\n");
	printf("\t--------------\n\n");
	printf("Player 1 : X Player 2 : O\n\n");

	printf("\t   |   |\n");
	printf("\t %c | %c | %c\n",arr[1], arr[2], arr[3]);
	printf("\t___|___|___\n");
	printf("\t   |   |   \n");
	printf("\t %c | %c | %c\n",arr[4], arr[5], arr[6]);
	printf("\t___|___|___\n");
	printf("\t   |   |   \n");
	printf("\t %c | %c | %c\n",arr[7], arr[8], arr[9]);
	printf("\t   |   |   \n");
}

int checkwin()
{
	if(arr[1] == arr[2] && arr[2] == arr[3])
		return 1;
	else if(arr[4] == arr[5] && arr[5] == arr[6])
		return 1;
	else if(arr[7] == arr[8] && arr[8] == arr[9])
		return 1;
	else if(arr[1] == arr[4] && arr[4] == arr[7])
		return 1;
	else if(arr[2] == arr[5] && arr[5] == arr[8])
		return 1;
	else if(arr[3] == arr[6] && arr[6] == arr[9])
		return 1;
	else if(arr[1] == arr[5] && arr[5] == arr[9])
		return 1;
	else if(arr[3] == arr[5] && arr[5] == arr[7])
		return 1;
	else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' &&
			arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
		return 0;
	else
		return -1;
}
