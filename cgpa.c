#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getResult(double numberOfCourses); // function prototype


int main(void){

    char stdName[] = "";
    char stdDepartment[] = "";
    int matricNo;
    int number;
    int numberOfCourses;
    double result;
    double input;


    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s" , &stdName);
    printf("Department: ");
    scanf("%s" , &stdDepartment);
    printf("Matric Number: ");
    scanf("%d" , &matricNo);
    

    puts("*********************************");
   
   printf("Number OF Courses Offering: ");
   /* 
        this is were it worked last
        and it is accepting an input 
        after that it crashes!!!

   */

    // input = scanf(" %d" , number);

    result = printf("%d " , getResult(2));

    puts("*********************************");

    printf("%d" , result);
    
}



double getPoints(double stdScore){
    if(stdScore >= 70 & stdScore <= 100){
        return 5.0;
    }
    else if(stdScore >= 60 & stdScore <= 69){
        return 4.0;
    }
    else if(stdScore >= 50 & stdScore <= 59){
        return 3.0;
    }
    else if (stdScore >= 40 & stdScore <= 49){
        return 2.0;
    }
    else 
        return 1.0;
    
}


double getResult(double numberOfCourses){
   
    double scores;
    double stdPoints;
    double totalStdPoints;
    double totalGPA;
    int courseUnit;
    double GPA;
    double CGPA;

    printf("Enter Your Scores and Course Units: \n");

    puts("*********************************");

    for (int i = 1; i <= numberOfCourses; i++){
        printf("Exam_Score: ");
        scanf("%f " , &scores);
        printf("Course_Units: ");
        scanf("%d \n" , &courseUnit);

        puts("*********************************");
    
        stdPoints = getPoints(scores);
        totalStdPoints += stdPoints;

        GPA = stdPoints * courseUnit;
        totalGPA += GPA;

    }

    CGPA = GPA / totalStdPoints;
    return CGPA;
}
