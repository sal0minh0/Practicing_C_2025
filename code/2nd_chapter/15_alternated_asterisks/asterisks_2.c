#include <stdio.h>

void printLessLines(int line) {
    if (line > 8) return; // Stop after 8 lines, becauce the calling "printLessLines(1)"" in main reads again this function until is higher than 8, ifs higher than 8, stops (returns nothing)
    if (line % 2 != 0) { // checks if the number is even for even asterisks, the asterisks is like the numbers of 1-18, the first line is the conjunt of numbers = {1, 3, 5, 7, 9, 11, 13, 15}
        printf("* * * * * * * * *\n"); // Print for odd-numbered lines
    } 
    if (line % 2 == 0){ //checks if the number is odd for odd asterisks, the second line is the conjunt of numbers = {2, 4, 6, 8, 10, 12, 14, 16, 18}
        printf(" * * * * * * * * *\n"); // Print for even-numbered lines
    }
    printLessLines(line + 1); // Recursive call for the next line
}

int main(){

    int op;

    printf("Choose which drawing do you prefer, 1 or 2? ");
    scanf("%d", &op);

    //Option 1
    if (op == 1) {
        printf("* * * * * * * * *\n");
        printf(" * * * * * * * * *\n");
        printf("* * * * * * * * *\n");
        printf(" * * * * * * * * *\n");
        printf("* * * * * * * * *\n");
        printf(" * * * * * * * * *\n");
        printf("* * * * * * * * *\n");
        printf(" * * * * * * * * *\n");
    }

    //Option 2
    if (op == 2) {
        printLessLines(1);
    }
    return 0;
}