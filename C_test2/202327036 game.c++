#include <stdio.h>

#define Rock 0
#define Paper 1
#define Scissor 2

int playerchoice() {
	int choice;
	printf("����(0), ��(1), ����(2) �߿��� �����ϼ���: ");
	scanf("%d", &choice);
	return choice;
}

int Winner(int P, int C) {
	if (P == C)
		return 0;

	if ((P == Scissor && C == Rock)
		(P == Rock && C == Scissor))
		return (P == Rock) ? 1 : -1;

	if ((P == Scissor && C == Paper)
		(P == Paper && C == Scissor))
		return (P == Scissor) ? 1 : -1;

	return (P == Paper) ? 1 : -1;
}

Game() {
	int P, C, result;

	P = playerchoice();
	C = rand() % 3;

	printf("�����: ");
	if (P == Rock)
		printf("����\n");
	else if (P == Paper)
		printf("��\n");
	else if (P == Scissor)
		printf("����\n");

	printf("��ǻ��: ");
	if (C == Rock)
		printf("����\n");
	else if (C == Paper)
		printf("��\n");
	else if (C == Scissor)
		printf("����\n");

	result = Winner(P, C);
	if (result == 0) {
		printf("���\n");
	}
	else if (result == 1) {
		printf("�̱�\n");
	}
	else { printf("��\n"); }
}

int main() {
	printf("=== ���������� ���� ===\n");

	Game();

	return 0;
}