#include <stdio.h>
#include <stdlib.h>

int main(){
	int guess;
	while(guess != 12345) {
	printf("Enter the number that you guess: ");
	scanf("%d", &guess);
	if (guess > 12345) {
		printf("Your guess is too high.\n");
		}
	else if (guess < 12345) {
		printf("Your guess is too low.\n");
		}
	else {
		printf("Congratulations! You have guessed the correct number!.\n");

		}
	}
}
