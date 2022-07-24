#include <stdio.h>

enum Weekday {
    mon = 1,
    tue,
    wed,
    thu,
    fri,
};

//we can run with -Wall to see all the possible error when running with gcc 
//gcc -Wall main.c -o prog && ./prog

int main(){
    enum Weekday currentday = mon;
    currentday = 7;

    switch (currentday){
    case mon:
        printf("Monday\n");
        break;
    case tue:
        printf("Tuesday\n");
        break;
    case wed:
        printf("Wednesday\n");
        break;
    case thu:
        printf("Thursday\n");
        break;
    case fri:
        printf("Friday\n");
        break;
    default:
        printf("Today is not weekday\n");
        break;
    }

    return 0;
}