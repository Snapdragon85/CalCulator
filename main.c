#include <stdio.h>
#include <unistd.h>
#include <windows.h>


void clearScreen() {
    printf("\e[1;1H\e[2J");
}

int main() {
    int a;
    int b;
    float c;
    int choice;

    clearScreen();
    printf("What is the 'a' value?:");
    scanf("%d", &a);

    printf("What is the 'b' value?:");
    scanf("%d", &b);

    printf("What operation? 1) Add, 2) Sub, 3) Div, 4) Mult :");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Adding \n");
        c = a + b;
        sleep(1);
        printf("The answer is %f\n", c);
        sleep(1);
    }
    if (choice == 2) {
        printf("Subtracting\n");
        c = a - b;
        sleep(1);
        printf("The answer is %f\n", c);
        sleep(1);
    }
    if (choice == 3) {
        printf("Dividing\n");
        c = a / b;
        sleep(1);
        printf("The answer is %f\n", c);
        sleep(1);
    }
    if (choice == 4) {
        printf("Multiplying\n");
        c = a * b;
        sleep(1);
        printf("The answer is %f\n", c);
        sleep(1);
    }
}