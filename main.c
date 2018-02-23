#include <stdio.h>
#include <stdlib.h>


int main()
{

    int day;
    int month;
    int year;
    int newDay;
    int numberOfDaysInMonth;

    printf("Enter day\n");
    scanf("%d", &day);

    printf("Enter month\n");
    scanf("%d", &month);

    printf("Enter year\n");
    scanf("%d", &year);

    printf("The date is %d/%d/%d\n\n", day, month, year);


    if(year % 4 == 0){
        printf("\nVisokosna\n(ne znam kak e na angliiski ne me sydi :D)\n\n");
        if(month == 2){
            if(day < 30){

                void Months();

                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);

            }else if(day > 29){
                printf("\nThis date does not exist\n");
            }
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 32){
                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 31){
                printf("\nThis date does not exist\n");
            }
        }else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
            if(day < 31){
                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 30){
                printf("\nThis date does not exist\n");
            }
        }



    }else if(year % 100 != 0){
        printf("\nNe e visokosna\n(ne znam kak e na angliiski ne me sydi :D)\n");
        if(month == 2){
            if(day < 29){

                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);

            }else if(day > 28){
            printf("\nThis date does not exist\n");
            }
        }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 32){
                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 31){
                printf("\nThis date does not exist\n");
            }
        }else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
            if(day < 31){
                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 30){
                printf("\nThis date does not exist\n");
            }
        }


    }


    return 0;
}

void Months (int* numberOfDaysInMonth){

    int January[31] = {1};
    int February[28] = {2};
    int March[31] = {3};
    int April[30] = {4};
    int May[31] = {5};
    int June[30] = {6};
    int July[31] = {7};
    int August[31] = {8};
    int September[30] = {9};
    int October[31] = {10};
    int November[30] = {11};
    int December[31] = {12};



    return;
}
