#include <stdio.h>

int main()
{
	printf("주인공의 공격력을 입력하세요.");
	
	int attack;
	scanf("%d",&attack);
	if(attack>30)
	{
	        printf("주인공의 공격력은 %d입니다.\n",attack);
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",attack);
	        printf("적의 잔여 HP : 0\n");
		printf("적을 물리쳤습니다!\n");
		printf("Happy End");
	}
	else
	{
		printf("주인공의 공격력은 %d입니다.\n",attack);
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",attack);
		printf("적의 잔여 HP : %d\n",(30-attack));
		printf("적이 주인공을 공격하여 주인공이 뒈졌습니다.\n");
		printf("Game Over.");
	}


	return 0;
}
