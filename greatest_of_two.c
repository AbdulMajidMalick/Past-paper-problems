#include <stdio.h>

int main() {
    int number, largest, smallest;
    int firstInput = 1;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (firstInput) {
            largest = smallest = number;
            firstInput = 0;
        } else {
            if (number > largest)
                largest = number;
            if (number < smallest)
                smallest = number;
        }

        printf("Largest so far: %d\n", largest);
        printf("Smallest so far: %d\n", smallest);
        

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nFinal Results:\n");
    printf("Largest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;
}
