#include "stdio.h"
#include "string.h"

#define MAX_LINE 128
#define NULL_TERMINATED_STRING '\0'

/*!
 *The function prints the substrings that contains the char "c" and count them
 * @param str Is the string from the user/ file, without \n.
 * @param c Is the char from the user/ file.
 * @return The number of substrings containing the char "c".
 */
int suffix(char str[], char c)
{
    int i, counter = 0; /*initialization.*/
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            counter++;
            printf("\n%s", str+i);/*prints the substring containing "c"*/
        }
    }
    return counter;
}


/*!
 * Runs the program. Handling the input from user/ file, edit the last char of the string and prints to the screen
 * the resulted count from suffix().
 * @return 0 if all runs well.
 */
int main()
{
    char c;
    char str[MAX_LINE];

    /*according to what Yakir has answered at the forum*/
    printf("\nPlease enter a single char, a space, and a string to parse from: ");
    c = getchar();/*char input from user*/
    getc(stdin);/*char input from a file*/

    fgets(str, MAX_LINE ,stdin);/*string input from user/ file*/
    printf("\nThe string that was accepted is: %s", str);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = NULL_TERMINATED_STRING;/*ensure 'str' doesn't holds '\n.*/

    /*The data( char "c" and string "str") is printed first. Then the function is called, and the resulted substring
     * and counter are being printed to the screen.*/
    printf("\n\nThe number of final clauses that contains the char \"%c\" founded in \"%s\" is: %d\n", c, str, suffix
    (str, c));

    return 0;
}
