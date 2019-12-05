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
long translate_dec_hex(char dec_chr[]){
    char binaryNum[1000] = {'0', '\0'};/* initialization*/
    long decNum = atol(dec_chr);/* convert char to int.*/
    int i = 0;
//    long long temp =1;
//    int rem = 1;/* initialization*/
    while (decNum != 0) {
        rem = decNum%BINARY_FACTOR;
        decNum = decNum / BINARY_FACTOR;
        binaryNum +=  rem*temp;
        temp *=  DECIMAL_FACTOR;/* setting the length of the binary number*/
    }
    return binaryNum;


}


/*!
 * Runs the program; Getting the input number from the user and prints the equivalent binary form.
 * @return
 */
int main() {
    char decChr[100];/* The user can type an integer of up to 100 digits.*/
    printf("Please enter a decimal number: ");
    scanf("%s", decChr);/* Getting the input from user.*/
    long long binaryNumber = translate_dec_hex(decChr);
    printf("%llu", binaryNumber);
    return 0;
}