#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BINARY_FACTOR 2
#define DECIMAL_FACTOR 10
#define ZERO_CHAR '0'
#define NULL_TERMINATED_STRING '\0'

char binaryNum[1000] = {'0', '\0'};/* initialization as global variable*/

/*!
 *The function gets a decimal number as a string and convert ot to int in order to do some
 * calculations on it, and prints its binary form.
 * @param dec_chr is the number as a string.
 */
 void translate_dec_hex(char dec_chr[])
 {
    unsigned int decNum = strtol(dec_chr, NULL, DECIMAL_FACTOR);/* convert char to int.*/
    int i , j , length;
    char temp;
    i = 0;
    while (decNum != 0)/*Calculating- collecting the remains of the divide, each iteration*/
    {
        binaryNum[i] =  ZERO_CHAR + decNum % BINARY_FACTOR;
        i++;
        decNum = decNum / BINARY_FACTOR;
    }
    length = 0;
    while(binaryNum[length] != NULL_TERMINATED_STRING) length +=  1;/*Getting the length of the resulted binary number*/
    for (j = 0; j < length/BINARY_FACTOR; j++)/*Reverse it*/
    {
        temp = binaryNum[j];
        binaryNum[j] = binaryNum[length - j -1];
        binaryNum[length -j- 1] = temp;
    }
}



/*!
 * Runs the program; Getting the input number from the user and prints the equivalent binary form.
 * @return
 */
int main() {
    char decChr[100] ={0} ;/* The user can type an integer of up to 100 digits.*/
    printf("Please enter a decimal number: ");
    scanf("%s", decChr);/* Getting the input from user.*/
    translate_dec_hex(decChr);/* Converting the number to binary form*/
    printf("The binary form of %s is: \n %s\n", decChr, binaryNum);
    return 0;
}