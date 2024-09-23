#include <stdio.h>

int main()
{
    int amount, five, ten, twenty, fifty, hundred, remainder;

    printf("Enter a amount in $: ");
    scanf("%d", &amount);

    hundred = amount / 100;
    remainder = amount % 100;

    fifty = remainder / 50;
    remainder %= 50;

    twenty = remainder / 20;
    remainder %= 20;

    ten = remainder / 10;
    remainder %= 10;

    five = remainder / 5;
    remainder %= 5;

    printf("You can pay the amount in:\n");
    printf("%d x $100 bills\n", hundred);
    printf("%d x $50 bills\n", fifty);
    printf("%d x $20 bills\n", twenty);
    printf("%d x $10 bills\n", ten);
    printf("%d x $5 bills\n", five);

    printf("Remaining amount is: $%d\n", remainder);

    return 0;
}
