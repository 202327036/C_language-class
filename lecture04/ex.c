#include <stdio.h>

int main()
{
    printf("당신의 공격력을 정하세요.");
    int attack;
    scanf("%d",&attack);

    if(attack>50)
    { printf("당신의 공격력이 적의 HP를 상회했습니다.");
	    printf("적의 HP : %d",(50-attack));
	    printf("성공");
    }

    else
    { printf("당신의 공격력이 적의 HP를 넘지 못했습니다.");
	    printf("적의 잔여 HP : %d", (50-attack));
    }








return 0;}
