#include <stdio.h>

int square(int y);
int maximum(int firstInt , int secondInt , int thirdInt);


int main(void){

    for(int x = 1; x <= 10; ++x){
        printf("%d" , square(x));
    }

    int firstNum;
    int secondNum;
    int thirdNum;

    printf("\nEnter three INTEGERS\n");
    scanf("%d%d%d" , &firstNum , &secondNum , &thirdNum);
    printf("The Highest Number is => %d" , maximum(firstNum , secondNum , thirdNum));
}

int square(int value){
    return value * value;
}

int maximum(int firstInt , int secondInt , int thirdInt){
    int max = firstInt;

    if(secondInt > max){
        max = secondInt;
    }
    else if(thirdInt > max){
        max = thirdInt;
    }

    return max;
}
