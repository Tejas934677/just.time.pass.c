#include <stdio.h>

int main() {
    int day ; 
    printf("what is the date today");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("Monday, have a nice day\n");
            break;
        case 2:
            printf("Today is Tuesday, make it beautiful\n");
            break;
        case 3:
            printf("Today is Wednesday, work forever\n");
            break;
        case 4:
            printf("Today is Thursday,train well\n");
            break;
        case 5:
            printf("Today is Friday, eat well\n");
            break;
        case 6:
            printf("Today is Saturday, go gym\n");
            break;
        case 7:
            printf("Today is Sunday, say not to fake dreams \n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}
