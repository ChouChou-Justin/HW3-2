#include <stdio.h>
#include <stdlib.h>

void hanoi(int i, int begin, int mid, int dest);

int main(void)
{
	int i;

	printf("�`�@���h�ֶ�L�n�h?\n");
	scanf("%d", &i);
	hanoi(i, 1, 2, 3);

	return 0;
}

void hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1)
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, dest);
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, dest);
		hanoi(i - 1, mid, begin, dest);
	}
}