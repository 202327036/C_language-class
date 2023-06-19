#include <stdio.h>

#define Rock 0
#define Paper 1
#define Scissor 2

int playerchoice() {
	int choice;
	printf("가위(0), 보(1), 바위(2) 중에서 선택하세요: ");
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

	printf("사용자: ");
	if (P == Rock)
		printf("바위\n");
	else if (P == Paper)
		printf("보\n");
	else if (P == Scissor)
		printf("가위\n");

	printf("컴퓨터: ");
	if (C == Rock)
		printf("바위\n");
	else if (C == Paper)
		printf("보\n");
	else if (C == Scissor)
		printf("가위\n");

	result = Winner(P, C);
	if (result == 0) {
		printf("비김\n");
	}
	else if (result == 1) {
		printf("이김\n");
	}
	else { printf("짐\n"); }
}

int main() {
	printf("=== 가위바위보 시작 ===\n");

	Game();

	return 0;
}