/* Always remember the termination character
any operation with strings don't forget 
termnation string */

/* In C strings are just character arrays */

/*PROGRAM WOULDN'T COMPILE*/

# include <stdio.h>
char x[6];
x[0] = 'H';
x[1] = 'e';
x[2] = 'l';
x[3] = 'l';
x[4] = 'o';
x[5] = '\0';

printf("%s\n",x);

x[3] ='\0';
printf("%s\n",x);

