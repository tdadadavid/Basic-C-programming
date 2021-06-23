#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// A C program that generates a prime
// then converts it to octal
int decToOctal(int value);


int main(){

    int remainder = 0;

    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;

    if((randomNumber % 2) != 0 ){
        printf("Prime Number: %d" , randomNumber);
    }

    printf("\nEquivalent octal form: %d" , decToOctal(randomNumber));
}


int decToOctal(int value){
    int octal = 0, i = 1;

    while (value != 0){
    octal += (value % 8) * i;
    value /= 8;
    i *= 10;
    }

return octal;
}
