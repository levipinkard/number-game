#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
int main()
{
	srand(time(NULL));
	int r = ( rand() % 10 ) + 1; /* generates "random" number */
	int number;
	int c = 0;
	int count = 0;
	printf( "Guess a number from 1 to 10! You have 5 tries.\n" );
	do {
		scanf( "%d", &number);
		if (number == r) {
			printf( "Correct! You win!!!\n" );
			c = 1; /* ends loop if correct */
		}
		else if (number > r) {
			printf( "Too high! %d guesses remaining.\n", 4 - count );
			count++;
		}
		else {
			printf( "Too low! %d guesses remaining.\n", 4 - count );
			count++;
		}	
	}
	while ( c == 0 && count < 5 );
	return 0;
}
