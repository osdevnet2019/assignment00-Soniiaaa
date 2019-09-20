#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
        int k;
        char str[10000];
        do{
                k = scanf("%s", str);
                for(int i = 0; i<=str[i]; i++)
                {
                        str[i] = tolower(str[i]);
                }
                printf("%s ", str);
        } while (k != EOF);
        return 0;
}

