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
		printf("����(0), ����(1), ��(2) �� �����ϼ���. >>");
		scanf_s("%d", &player);
		com = rand() % 3;

		value = player - com;

		//�÷��̾ �����϶� 0	���� 0 = 0 ��
		//						���� 1 = -1 ��
		//						�� 2  = -2 ��	��
		
		//�÷��̾ �����϶� 1	���� 0 = 1 ��	��
		//						���� 1 = 0 ��
		//						�� 2  = -1 ��
		 
		//�÷��̾ ���϶� 2		���� 0 = 2 ��
		//						���� 1 = 1 ��	��
		//						�� 2  = 0 ��


		//���� ���� : 0
		value = result;

		//���� ���� : 1, -2
		if (value == 1 || value == -2) result = 1;

		//���� ���� : -1, 2
		if (value == -1 || value == 2) result = -1;
		
		printf("player : %d vs com : %d = %d \n", player, com, result);
	}

}