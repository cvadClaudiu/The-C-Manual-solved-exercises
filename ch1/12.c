#include <stdio.h>

#define IN 1
#define OUT 0

 int main()
{
    int c, nw, state;
    state = OUT;
    nw = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            
            state = IN;
            ++nw;
            putchar(c);
            while((c = getchar()) != EOF)
            {
                putchar(c);
                if(c == ' ' || c == '\n' || c == '\t')
                {
                    putchar('\n');
                }
            }
        }
    }



return 0;
} 