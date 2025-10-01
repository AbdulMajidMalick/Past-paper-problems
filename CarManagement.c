#include <stdio.h>

int main() {
    int large, medium, small, n;
    int feedback = 0;
    int usedLarge = 0, usedMedium = 0, usedSmall = 0;
    printf("Enter number of large parking spaces: ");
    scanf("%d", &large);
    printf("Enter number of medium parking spaces: ");
    scanf("%d", &medium);
    printf("Enter number of small parking spaces: ");
    scanf("%d", &small);
    printf("Enter number of cars: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        char type;
        printf("Enter type of car %d (L/M/S): ", i);
        scanf(" %c", &type);

        if (type == 'L' || type == 'l') { 
            if (large > 0) {
                large--; usedLarge++; feedback += 5;
            } else {
                feedback -= 50;
            }
        } 
        else if (type == 'M' || type == 'm') {
            if (medium > 0) {
                medium--; usedMedium++; feedback += 5;
            } else if (large > 0) {
                large--; usedLarge++; feedback += 10;
            } else {
                feedback -= 50;
            }
        } 
        else if (type == 'S' || type == 's') {
            if (small > 0) {
                small--; usedSmall++; feedback += 5;
            } else if (medium > 0) {
                medium--; usedMedium++; feedback += 10;
            } else if (large > 0) {
                large--; usedLarge++; feedback += 10;
            } else {
                feedback -= 50;
            }
        } 
        else {
            printf("Invalid input. Skipping...\n");
        }
    }
    printf("\nFinal Feedback Score = %d\n", feedback);
    printf("Total occupied spaces:\n");
    printf("  Large used: %d\n", usedLarge);
    printf("  Medium used: %d\n", usedMedium);
    printf("  Small used: %d\n", usedSmall);
    return 0;
}
