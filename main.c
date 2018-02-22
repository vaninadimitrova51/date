#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int day, month, year;
    int ndays;
    int nMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    printf("Enter the day\n");
    scanf("%d", &firstNumber);

    printf("Enter the month\n");
    scanf("%d", &secondNumber);

    printf("Enter the year\n");
    scanf("%d", &thirdNumber);

    printf("The date is: %d/%d/%d\n", firstNumber, secondNumber, thirdNumber);

    ndays = nMonths[secondNumber + 1];

    if(secondNumber == 2){
        if(thirdNumber % 100 == 0){
            if(thirdNumber % 400 == 0){
                ndays = 28;
            }
        }else if(thirdNumber % 4 == 0){
            ndays = 29;
        }
        day = firstNumber - 1;
        month = secondNumber;
        year = thirdNumber;
        if(day > ndays){
            month++;
        }
        if(month > 12){
            month = 1;
            year++;
        }
    }

    printf("The date before: %d/%d/%d", day, month, year);


    return 0;
}
