#include <stdio.h>

main() {
    int num1, num2, sum;

    // Ask user for two numbers
    printf("Enter the First number:");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    scanf("%d",&num1,&num2,sum);

}

