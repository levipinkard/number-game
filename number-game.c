#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
int main() {
	srand(time(NULL));
	int r = ( rand() % 10 ) + 1; /* generates "random" number */
	int number;
	int c = 0;
	int count = 5;
	printf( "Guess a number from 1 to 10! You have 5 tries.\n" );
	do {
		if ( count == 0 ) {
			printf ( "\nGame over! Press enter to exit...\n" );
			c = 1;
		}	
		else {	
			scanf( "%d", &number ); /* gets user guess */
			if ( number == r ) {
				printf ( "\nCorrect! You win!!! Press enter to exit...\n" );
				c = 1; /* ends loop */
			}
			else if ( number > r ) {
				if ( count != 2 )	{
					printf ( "Too high! %d guesses remaining.\n", count - 1);
				}
				else {
					printf ( "Too high! 1 guess remaining.\n" );
				}
				count--; /* subtracts 1 from guess counter*/
			}
			else {
				if (count != 2) {
					printf ( "Too low! %d guesses remaining.\n", count - 1);
				}
				else {
					printf ( "Too low! 1 guess remaining.\n" );
				}
				count--; /* subtracts 1 from guess counter*/
			}	
		}
	}
	while ( c == 0 ); /* ends loop if correct answer guessed or guess count reaches 5 */
	getchar();
	getchar();
	return 0;
}