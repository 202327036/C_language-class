#include <stdio.h>


int game_title ()
{
	printf("#################################\n");
	printf("##                             ##\n");
	printf("##   찐따인 내가 지역 최강?!     ##\n");
	printf("##                             ##\n");
	printf("##                             ##\n");
	printf("##         1. Game start       ##\n");
	printf("##         2. Load             ##\n");
	printf("##         3. Quit             ##\n");
	printf("##                             ##\n");
	printf("##                             ##\n");
	printf("#################################\n");

	return 0;

}


int main ()
{       game_title ();
	int game_menu = 1;
	int input = 0;
	int answer = 0;
	char male[20];

	while(game_menu)
	{ printf("input(1~3)>>");
		scanf("%d",&input);
		if (input==3)
		{ game_menu = 0; }

	if(input==1)
	{ printf("남주 이름을 입력하세요.");
	 scanf("%s",male);
	 printf("%s로 정해졌습니다.",male);

	 game_menu = 0;

	}
	}


	return 0;
}

