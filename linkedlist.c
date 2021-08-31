#include "stdio.h"
#include "stdlib.h"

typedef struct Date {
    short year;
    char month;
    char day;
    struct Date *next;
} Date;

Date AddDays(Date, int);

int main()
{


    Date ds[1] = { { 2021, 14, 6 } };
    Date second = AddDays( *ds, 3);
    printf ("%04i-%02i-%02i\n", ds[0].year, ds[0].month, ds[0].day);
    printf ("%04i-%02i-%02i\n", second.year, second.month, second.day);


    Date *head = malloc(sizeof(Date));
    head->year = 2016;
    head->day = 20;
    head->month = 2;
    head->next = malloc(sizeof(Date));
    head->next->year = 2018;
    head->next->day = 24;
    head->next->month = 3;
    head->next->next = NULL;

    //Change date
    Date *dt = malloc(sizeof(Date));
    dt->year = 2021;
    dt->day = 21;
    dt->month = 6;
    dt->next = head->next;
    head->next = dt;

    dt = head;
    while (dt != NULL) {
        printf ("%04i-%02i-%02i\n", dt->year, dt->month, dt->day);
        printf("%i %i\n", &dt, (*ds));
        dt = dt->next;
    }

    free(head->next);
    free(head);

#define TEST(x) x< 10
    int i = 5;
    if( TEST(i) )
        printf("YAY");
    char c = getchar();

}

Date AddDays(Date dt, int days)
{
    dt.day += days;
    return dt;
}