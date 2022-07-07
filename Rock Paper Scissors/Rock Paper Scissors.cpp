#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Console.h"

int g_result[3][3] =
{
	//	가위0, 바위1, 보2 com
	//	가위 0
	{0,-1,1},
	//	바위 1
	{1,0,-1},
	//	보 2
	{-1,1,0}
};

void printXY(int _x, int _y, const char* _text)
{
	GotoXY(_x, _y);
	printf(_text);
}

int main(void) 
{
	int player, com, result = 0;
	char szResult[3][10] = { "패","무","승" };

	srand(time(NULL));

	int value = 0;

	while (1)
	{
		//printf("가위(0), 바위(1), 보(2) 중 선택하세요. >>");
		printXY(0, 10, "가위(0), 바위(1), 보(2) 중 선택하세요. >>");
		scanf_s("%d", &player);
		com = rand() % 3;

		value = player - com;

		result = g_result[player][com];
		printf("player : %d vs com : %d = %s \n", player, com, szResult[result+1]);
	}

}