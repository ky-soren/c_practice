#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    char name[20];
    printf("Enter your age: ");

    scanf("%d", &age); //%d = int, %lf = double, %c = character, %s = string
    printf("You are %d years old", age);

    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}