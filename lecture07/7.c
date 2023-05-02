#include <stdio.h>

int main()
{
          int a=18;
	  char b=1;
	  char c=3;

            while (b&c)
              {
		    printf("%d:%d\n",b,c);
		     b=b>>1;
		     printf("%d : %d\n",b,c);
		     
		     printf("%d : %d\n",a);
		     a=a<<2;
	      }
      	    return 0;
}
