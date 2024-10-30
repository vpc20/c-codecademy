#include <stdio.h>

int main()
{
    int numOfBooks = 10;
    char favLetter = 'v';
    char favDigit = '5';
    double costOfCandyBar = 0.25;

    const double SPEEDOFLIGHT = 1.86;
    int timeTraveledInSeconds = 30;

    double testScore = 95.7;
    int displayScore = 0;

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

    printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

    // Casting Types
    displayScore = (int)testScore;
    printf("Great work, you got a %d%% on your test\n", displayScore);

    targetChar = (char)sourceInt;
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

    targetChar = sourceDouble;   // last digit was taken
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}