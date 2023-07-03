#include <stdio.h>
#include <time.h>

void generate_password(int length) {
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]<>?";

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        printf("%c", characters[rand() % (sizeof(characters) - 1)]);
    }

    printf("\n");
}

int main(void) {
    
 
    generate_password(15);

    return 0;
}
