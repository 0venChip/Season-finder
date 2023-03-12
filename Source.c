#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int monthInteger;
	int dayInteger;
	//declares the integers that are used
	printf("please input a numerical month 1-12\n");
    scanf("%d", &monthInteger); 
	//the scanf looks for an input from the user and the will apply to the month integer.
	printf("please input a numerical day 1-31\n");
	scanf("%d", &dayInteger);
	// finding the input of the day integer
	if ((monthInteger == 3 && dayInteger >= 20 && dayInteger <= 31) || (monthInteger == 4 && dayInteger <= 31 && dayInteger >= 1) || (monthInteger == 5 && dayInteger <= 31 && dayInteger >= 1) || (monthInteger == 6 && dayInteger >= 1 && dayInteger <= 20))
	{
		printf("This date is in spring");
	}
	else if  ((monthInteger == 6 && dayInteger >= 21 && dayInteger <= 31) || (monthInteger == 7 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 8 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 9 && dayInteger >= 1 && dayInteger <= 21))
	{
		printf("This date is in summer");
	}
	else if ((monthInteger == 9 && dayInteger >= 22 && dayInteger <= 31) || (monthInteger == 10 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 11 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 12 && dayInteger >= 1 && dayInteger <= 20))
	{
		printf("This date is in autumn");
	}
	else if ((monthInteger == 12 && dayInteger >= 21 && dayInteger <= 31) || (monthInteger == 1 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 2 && dayInteger >= 1 && dayInteger <= 31) || (monthInteger == 3 && dayInteger >= 1 && dayInteger <= 19))
	{
		printf("This date is in winter");
	}
	// the list of if statements that will outpout the correct season depending on the input.
}