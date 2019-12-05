#include <stdio.h>
#include <stdlib.h>

#define BINARY_FACTOR 2
#define DECIMAL_FACTOR 10

//TODO: Adapt the code to working with arrays.


/*!
 *The function gets a decimal number as a string and convert ot to int in order to de some
 * calculations on it.
 * @param dec_chr is the number as a string.
 * @return the original number as binary number.
 */
 void translate_dec_hex(char dec_chr[])
 {
    int  decNum = atoi(dec_chr);/* convert char to int.*/
    char binaryNum[1000] = {'0', '\0'};/* initialization*/
    int i = 0;
//    long long temp =1;
//    int rem = 1;/* initialization*/
    while (decNum != 0)
    {
        binaryNum[i] =  '0' + decNum%BINARY_FACTOR;
        i++;
        decNum = decNum / BINARY_FACTOR;
//        temp *=  DECIMAL_FACTOR;/* setting the length of the binary number*/
    }
    printf("%s", binaryNum);
    int length= 0;
    while(binaryNum[length] != '\0') length +=  1;
    int j, temp;
    for (j = 0; j < length/BINARY_FACTOR; j++)
    {
        temp = binaryNum[j];
        binaryNum[j] = binaryNum[length - j -1];
        binaryNum[length -j- 1] = temp;
    }
    printf("The binary form of %s is: \n %s", dec_chr, binaryNum);

}



/*!
 * Runs the program; Getting the input number from the user and prints the equivalent binary form.
 * @return
 */
int main() {
    char decChr[100] ={0} ;/* The user can type an integer of up to 100 digits.*/
    printf("Please enter a decimal number: ");
    scanf("%s", decChr);/* Getting the input from user.*/
    translate_dec_hex(decChr);
//    printf("%llu", binaryNumber);
    return 0;
}