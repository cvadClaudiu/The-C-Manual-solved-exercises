#include <stdio.h>

#define MAXLINE 1000 
#define OVER80 80

int gettline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max; 
    char line[MAXLINE];
    char longest[MAXLINE]; 
    char over80[MAXLINE];
    max = 0;
    while ((len = gettline(line, MAXLINE)) > 0)
    {
        if ( len > OVER80)
        {
            copy(over80, line);
            printf("\nlines over 80 characters: %s ", over80);
        }

        if (len > max) 
        {
            max = len;
            copy(longest, line);
        }
        
    }
    if (max > 0) 
    {
        printf("longest line: \n%s", longest);
        printf("\nnumber of characters: %d", max);
        
    }

return 0;
}

int gettline(char s[],int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n') 
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

return i;
}
void copy(char to[], char from[]){
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;

}