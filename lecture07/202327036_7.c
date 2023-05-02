#include <stdio.h>

int game_title ()
{
 printf("######################################\n");
 printf("##                                  ##\n");
 printf("##   Hello World                    ##\n");
 printf("##   -Ver 0.1-                      ##\n");
 printf("##                                  ##\n");
 printf("##            1. Start              ##\n");
 printf("##            2. How to play        ##\n");
 printf("##            3. Exit               ##\n");
 printf("##                                  ##\n");
 printf("##                                  ##\n");
 printf("######################################\n");
	return 0;

}


int how_to_play ()
{ printf("press space bar to kill them all.\n");
	printf("return to menu? 1. yes 2. no \n");
	printf("input 1 or 2>"); }

int main()
{       game_title();
	int game_menu = 1;
	int input = 0;
	int howtoplay_state = 1;
	int answer = 0;
	while(game_menu)
	{
             printf("input(1~3)>");
	     scanf("%d",&input);
	     if(input==3)
	     { game_menu = 0; } 

	if(input==2)
	{   while(howtoplay_state)
		{ how_to_play (); 
	       int answer;
               scanf("%d",&answer);
	       if (answer==1)
	       {howtoplay_state = 0;
		game_title ();}

	    }	    
	   
	}
	}
  
        return 0;
}
