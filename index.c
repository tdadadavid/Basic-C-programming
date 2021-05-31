#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
    int firstNumber;
    int secondNumber;

    printf("Enter two integers and" );
    printf("we'll tell their relationships ");


    scanf( "%d %d", &firstNumber, &secondNumber );
    

    if (firstNumber == secondNumber){
        printf("%d is equal to %d\n " , firstNumber , secondNumber);
    }
    
    if(firstNumber != secondNumber){
        printf("%d is not eqaul to %d \n" , firstNumber , secondNumber);
    }

    if(firstNumber <= secondNumber){
        printf("%d is less than or equal to %d\n " , firstNumber , secondNumber);
    }

    if (firstNumber >= secondNumber){
        printf("%d is greater than or equal to %d \n " , firstNumber ,secondNumber );
    }
    
    if (firstNumber > secondNumber){
        printf("%d is greater than %d\n " , firstNumber , secondNumber);
    }

    if(firstNumber < secondNumber){
        printf("%d is less than %d\n " , firstNumber , secondNumber);
    } 

    return 0;
}