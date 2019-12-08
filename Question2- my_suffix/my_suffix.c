#include "stdio.h"
#include "string.h"

int suffix(char str[], char c)
{
    int i, counter = 0;
    char temp[127];
    char endLines[127];
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
    char str[127];
    getc(stdin);
    printf("\nPlease enter a string to parse from: \n");
    fgets(str, 127 ,stdin);
    printf("\nThe number of final clauses founded in -%s- is: %d", str, suffix(str, c));

    return 0;




}
