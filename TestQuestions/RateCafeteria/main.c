#include <stdio.h>
#include <stdlib.h>
#define RESPONSES_SIZE 40 // forty students ratings
#define FREQUENCY_SIZE 11 // the frequency of each rating

// 1 => Awful
// 10 => Excellent

int main(){
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {
        10 , 2 , 3 , 4 , 6 , 7 , 8 , 9 , 10, 10 ,
        2 , 4 , 2 , 4 , 9 , 9 , 10 , 5, 2 , 10 ,
        5 , 5 , 6 , 6 , 7 , 3 , 2 , 4 , 10, 3 ,
        10 , 7 , 8 , 9 , 10 , 1 , 4 , 10 , 9 , 4
     };

     // incrementing the frequency by the responses
     // of each student
     for(size_t answer = 0; answer <= RESPONSES_SIZE - 1; ++answer){
        ++frequency[responses[answer]];
     }

     // I want to convert the frequencies into percentage(%)

     //Print the headers
     printf("%2s%14s    %s\n" , "Rating" , "Frequency" , "Percentage");

     // Print the students-response-rating and each
     // frequency
     for(size_t rating = 1; rating <= FREQUENCY_SIZE - 1; ++rating){
        printf("%4d%14d\n" , rating , frequency[rating]);
     }
}
