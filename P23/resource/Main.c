#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

enum Status { CONTINUE, WON, LOST };
int rollDice(void);

int main() {
	int sum;
	int point;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rollDice();

	switch (sum) {
	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		point = sum;
		printf("Point is %d\n",point);
		break;
	}
	while (gameStatus == CONTINUE) {
	sum = rollDice();
	if (sum == point) {
		gameStatus = WON;
	}
	else {
		if (sum == 7) {
			gameStatus = LOST;
		}
	}
	}
	if (gameStatus = WON) {
		printf("player wins\n");
	}
	else {
		printf("player lose\n");
	}
}

int rollDice() {
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	printf("player rolled %d+ %d\n", die1, die2, workSum);
	return workSum;
}