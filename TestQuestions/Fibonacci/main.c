#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n);

int main()
{
    int userInput;
    int result;

    printf("ENTER YOUR VALUE FOR N\nn:");
    scanf("%d" , &userInput);

    result = Fibonacci(n)

    printf("Fibonacci(%d) = %d" , userInput , result);

}


/*Fibonacci(0) = 0
 `Fibonacci(1) = 1
  Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
*/
int Fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
       return Fibonacci(n - 1) + Fibonacci(n-2);
    }
}
