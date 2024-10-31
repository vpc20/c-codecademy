#include <stdio.h>

int main()
{
    // Different data types
    int numOfBooks = 10;
    char favLetter = 'v';
    char favDigit = '5';
    double costOfCandyBar = 0.25;

    printf("\n");
    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
    printf("\n");

    const double SPEEDOFLIGHT = 1.86;
    int timeTraveledInSeconds = 30;

    printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);
    printf("\n");

    // ----------------------------------------------------------------------------------------------------------------------------
    // Casting Types
    double testScore = 95.7;
    int displayScore = 0;

    displayScore = (int)testScore;
    printf("Great work, you got a %d%% on your test\n", displayScore);
    printf("\n");

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    targetChar = (char)sourceInt;
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

    targetChar = sourceDouble; // last digit was taken
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
    printf("\n");

    // ----------------------------------------------------------------------------------------------------------------------------
    // Mathematical Operations
    int booksSold = 100;
    double bookCost = 9.99;
    double totalSalesValue;

    booksSold += 200;
    totalSalesValue = booksSold * bookCost;
    totalSalesValue /= 2;

    printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
    printf("\n");

    // modulo operator
    int endingDayOfWeek = 0;
    int daysThatPass = 10;
    int daysInWeek = 7;

    endingDayOfWeek = daysThatPass % daysInWeek;

    printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
    printf("\n");

    // increment/decrement
    int n = 13;
    int m = 10;

    m--;
    n++;

    printf("m = %d\n", m);
    printf("n = %d\n", n);
    printf("\n");

    int timesServerCrashed = 5;
    double losses = 500.95;

    losses *= timesServerCrashed;
    losses /= 2;

    printf("Total Losses: $%.2f\n", losses);
    printf("\n");

    // Comparisons
    int x = 5;
    int y = 42;

    if (x < y)
    {
        printf("Congratulations on setting up a comparison correctly!\n");
    }
    printf("\n");

    // Order of Operations
    x = (2 + 3) * 5;
    y = 2 / (4 + 6);

    printf("x is: %d\n", x);
    printf("y is: %d\n", y);
    printf("\n");

}