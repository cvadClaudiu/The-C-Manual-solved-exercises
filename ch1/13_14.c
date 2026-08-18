#include <stdio.h>

 int main(){
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    //digits graph
    printf("digits: \n      ");
    for(int k1 = 0; k1 <= 10; k1++)
    {
        if(k1 < 9)
            printf("%d|", k1+1);
        else if(k1 >= 10)
            printf("%d+", 10);
    }
    printf("\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%2d(%d):", ndigit[i], i);
        for(int j1 = 0 ; j1 < ndigit[i]; j1++)
        {
            if(j1 < 9)
                printf("~~");
            else if(j1 >= 10)
                ;
        }
        printf("\n");
    }

    //other characters graph
    printf("blank:");
    for(int jbl = 0; jbl < 10; jbl++)
    {
        if(jbl < 9)
                printf("~~");
            else if(jbl >= 10)
                ;
    }
    printf("\n");
    
    printf("other:");
    for(int jx = 0; jx < 10; jx++)
    {
        if(jx < 9)
                printf("~~");
            else if(jx >= 10)
                ;
    }


 

} 