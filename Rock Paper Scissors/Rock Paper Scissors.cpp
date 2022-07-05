#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int player, com, result = 0;

	srand(time(NULL));

	int value = 0;

	while (1)
	{
		printf("가위(0), 바위(1), 보(2) 중 선택하세요. >>");
		scanf_s("%d", &player);
		com = rand() % 3;

		value = player - com;

		//플레이어가 가위일때 0	가위 0 = 0 무
		//						바위 1 = -1 패
		//						보 2  = -2 승	승
		
		//플레이어가 바위일때 1	가위 0 = 1 승	승
		//						바위 1 = 0 무
		//						보 2  = -1 패
		 
		//플레이어가 보일때 2		가위 0 = 2 패
		//						바위 1 = 1 승	승
		//						보 2  = 0 무


		//무의 조건 : 0
		value = result;

		//승의 조건 : 1, -2
		if (value == 1 || value == -2) result = 1;

		//패의 조건 : -1, 2
		if (value == -1 || value == 2) result = -1;
		
		printf("player : %d vs com : %d = %d \n", player, com, result);
	}

}