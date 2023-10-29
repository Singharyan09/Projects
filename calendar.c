#include <stdio.h>

int main() {
    int year, month, day, totalDays;
    int dayOfWeek = 0; // 0 corresponds to Sunday, 1 to Monday, and so on
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    printf("Enter year (e.g., 2023): ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Determine the total number of days in the month
    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a value between 1 and 12.\n");
        return 1;
    }
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            totalDays = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                totalDays = 29; // Leap year
            } else {
                totalDays = 28; // Non-leap year
            }
            break;
        default:
            totalDays = 31;
    }

    printf("\n  Calendar for %d-%d\n", year, month);
    printf("  -------------------\n");

    // Print the days of the week
    for (int i = 0; i < 7; i++) {
     printf("%s  ", days[i]);
    }
    printf("\n");

   // Print leading spaces
    for (int i = 0; i < dayOfWeek; i++) {
        printf("    ");
    }

    // Print the calendar
    for (day = 1; day <= totalDays; day++)
    {
        printf("%2d  ", day);
        dayOfWeek++;

        if (dayOfWeek == 7)
         {
            dayOfWeek = 0;
            printf("\n");
        }
    }

    //printf("\n");

    return 0;
}
