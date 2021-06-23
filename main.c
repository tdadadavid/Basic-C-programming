#include <stdio.h>
#include <stdlib.h>

int main(){

    double firstNumber;
    double secondNumber;
    int reuslt;
    char operandNumber;


    printf("****************************\n");
    printf("*WELCOME TO DAVE-OMINI-CALC*\n");
    printf("****************************\n");

    printf("Enter first number: ");
    scanf("%lf" , &firstNumber);
    printf("Enter second number: ");
    scanf("%lf" , &secondNumber);

    puts("*******************************");
    printf("Enter =>  + or -  or / or *\n");

    printf("Enter operand:");
    scanf(" %c" , operandNumber);

    if(operandNumber == '+'){
        printf("%lf" , firstNumber + secondNumber);
    }
    else if(operandNumber == '-'){
        printf("%lf" , firstNumber - secondNumber);
    }
    else if(operandNumber == '/'){
        printf("%lf" , firstNumber / secondNumber);
    }
    else if(operandNumber == '*'){
        printf("%lf" , firstNumber * secondNumber);
    }
    else{
        printf("I can't perform that operation");
    }



    return 0;
}


