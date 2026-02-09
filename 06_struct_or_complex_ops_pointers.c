#include <stdio.h>
#include <stdlib.h>

// Funkcja zamieniajaca litery na duze
void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char input[100]; // Zakladamy, ze napis nie przekroczy 100 znakow

    printf("Podaj napis: ");
    scanf("%99[^\n]", input); // Wczytujemy napis do 99 znakow lub do napotkania znaku nowej linii

    toUpperCase(input); // Zamieniamy litery na duze

    printf("Napis po zamianie na duże litery: %s\n", input);

    return 0;
}
