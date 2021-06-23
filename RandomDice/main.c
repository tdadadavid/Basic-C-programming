#include <stdio.h>
#include <stdlib.h>

int main()
{
    int face = 0;
    unsigned int freq_1 = 0;
    unsigned int freq_2 = 0;
    unsigned int freq_3 = 0;
    unsigned int freq_4 = 0;
    unsigned int freq_5 = 0;
    unsigned int freq_6 = 0;

    // Assume we're rolling the dice 60,000
    for(unsigned int roll = 0; roll < 50; ++roll){
        face = 1 + rand() % 6;

        switch(face){
        case 1:
            ++freq_1;
            break;

        case 2:
            ++freq_2;
            break;

        case 3:
            ++freq_3;
            break;

        case 4:
            ++freq_4;
            break;

        case 5:
            ++freq_5;
            break;

        case 6:
            ++freq_6;
        }
    }

    printf("%s%10s\n" , "Face" , "Frequency");
    printf("1%10u\n" , freq_1);
    printf("2%10u\n" , freq_2);
    printf("3%10u\n" , freq_3);
    printf("4%10u\n" , freq_4);
    printf("5%10u\n" , freq_5);
    printf("6%10u\n" , freq_6);

    return 0;
}
