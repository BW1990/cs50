#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Height: ");
    int height = get_int();

    for (int i = 0; i < height; i++) {
        for (int tab = (height - i); tab > 0; tab--) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("#\n");
    }
}
