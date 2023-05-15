#include <stdio.h>

int game_title ()
{
	char screen1 [350]; /*가로:30 세로:10 */
	int a = 0;

	while (a<350)
	{   screen[a] = '#';
	    a=a+1;   }

	screen1[309]='#';
	screen1[30]='\n';
	screen1[61]='\n';
	screen1[92]='\n';
	screen1[123]='\n';
	screen1[154]='\n';
	screen1[185]='\n';
	screen1[216]='\n';
	screen1[247]='\n';
	screen1[278]='\n';
	screen1[309]='\n';
	printf ("%s\n",screen1);
	
	return 0;
}


int how_to_play ()
{  char screen2 [350];
	int b = 0;

	while(b<350)
	{ screen[b] = '#';
		b=b+1; }
	
	screen2[309]='#';
	screen2[30]='\n';
	screen2[61]='\n';
	screen2[92]='\n';
	screen2[123]='\n';
	screen2[154]='\n';
	screen2[185]='\n';
	screen2[216]='\n';
	screen2[247]='\n';
	screen2[278]='\n';
	screen2[309]='\n';
	printf("%s\n input 2 to quit game. \n
			input 1 to return to menu. \n",screen2);
}


int main()
{	game_title ();
	int game_menu = 1;
	int input = 0;
	int howto_state = 1;
	int answer = 0;

	while(game_menu)
	{     printf("select (1~3)>>");
		scanf ("%d",&input);
		if (input ==3)
		{ game_menu = 0; }
	
	if (input==2)
	{ while(howto_state)
		{ how_to_play ();
		int answer;
		scanf("%d",&answer);

		if (answer==1)
		{ howto_state = 0;
			game_title ();}

		if (answer==2)
		{ game_menu = 0; }
		}
	}
	}
}


