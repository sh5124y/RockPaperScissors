#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int player, com, result = 0;

	srand(time(NULL));

	while (1)
	{
		printf("가위(0), 바위(1), 보(2) 중 선택하세요 >>");
		scanf_s("%d", &player);
		com = rand() % 3;

		//플레이어가 가위일때 0
		if (player == 0)
		{
			if (com == 0) result = 0;
			else {
				if (com == 1) result = -1;
				else result = 1;
			}
		}

		//플레이어가 바위일때 1
		if (player == 1)
		{
			if (com == 0) result = 1;
			else {
				if (com == 1) result = 0;
				else result = -1;
			}
		}

		//플레이어가 보일때 2
		if (player == 2)
		{
			if (com == 0) result = -1;
			else {
				if (com == 1) result = 1;
				else result = 0;
			}
		}
		printf("player : %d vs com : %d = %d \n", player, com, result);
	}

}