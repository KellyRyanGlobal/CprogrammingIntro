#include "stdio.h"
#include "stdlib.h"


typedef struct Device {
    int f;
    int i1;
    int i2;
    long a;
    } Device;

typedef struct Date {
    short year;
    char month;
    char day;
} Date;

int main()
{
    Device device = { 123, -123, 45, 97 };
    Device *dev = &device;
    dev->i1 = -23;
    dev->i2 = dev->i1;

   printf ("int is %i\n", dev->f);
   printf ("const in is %i\n", dev->a);
   printf ("%i %u\n", dev->i1, dev->i2);

   char *s;

   s= malloc(100);
   strcpy(s, " this is a mem allocation");

   printf("%s\n", s);

   free(s);

   Date *d1 = malloc(sizeof(Date));

   d1->year = 2021;
   d1->day = 31;
   d1->month = 06;

   printf("%04i-%02i-%02i\n", d1->year, d1->month, d1->day);

   free(d1);

   char c = getchar();
}