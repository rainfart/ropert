#include <stdio.h>

int main() {

    printf("Ropert Age Calculator v1.0.0 (GPL-3.0-only) - Rain\n");
    printf("\n");

    int age;
    printf("How old are you?: ");
    scanf("%d", &age);
    float roperts = age / 9.0f;
    printf("You are %.3f Roperts old!\n", roperts);

    printf("\n");
    printf("Press Enter to exit...");
    getchar();
    getchar();
    return 0;
}
