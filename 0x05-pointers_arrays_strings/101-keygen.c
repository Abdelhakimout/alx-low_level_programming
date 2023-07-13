#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 15

char* generate_password(int length) {
    char* password = malloc((length + 1) * sizeof(char));
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
    int num_characters = strlen(characters);
  
    for (int i = 0; i < length; i++) {
        int random_index = rand() % num_characters;
        password[i] = characters[random_index];
    }
  
    password[length] = '\0';
    return password;
}

int is_valid_password(const char* password) {
    // Add your validation logic for the "101-crackme" program here
    // For example, you can check if the password meets certain criteria

    // In this example, a valid password must have exactly 15 characters
    if (strlen(password) == PASSWORD_LENGTH) {
        return 1;
    } else {
        return 0;
    }
}

char* generate_valid_password(int length) {
    char* password;
    do {
        password = generate_password(length);
    } while (!is_valid_password(password));

    return password;
}

int main() {
    srand(time(NULL));

    char* password = generate_valid_password(PASSWORD_LENGTH);
    printf("Random valid password: %s\n", password);
    free(password);
    return 0;
}
