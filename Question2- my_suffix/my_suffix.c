#include "stdio.h"
#include "string.h"

int suffix(char str[], char c)
{
    int i, counter = 0;
//    char temp[128];
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            counter++;
            printf("\n%s", str+i);
        }
    }
    return counter;
}



int main()
{
    char c;
    printf("\nPlease enter char: ");
    c = getchar();
    getc(stdin);
    char str[128];
    printf("\nPlease enter a string to parse from: \n");
    fgets(str, 128 ,stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    printf("\nThe number of final clauses that contains the char \"%c\" founded in \"%s\" is: %d", c, str, suffix(str, c));

    return 0;




}
