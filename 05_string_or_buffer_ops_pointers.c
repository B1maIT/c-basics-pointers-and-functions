#include <stdio.h>
#include <string.h>

// Funkcja do zaszyfrowania tekstu
void SCr(int n, char a[], char b[]) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            b[i] = (a[i] - 'A' + n) % 26 + 'A';
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            b[i] = (a[i] - 'a' + n) % 26 + 'a';
        } else {
            b[i] = a[i]; // Pozostawienie innych znakow bez zmian
        }
    }
    b[len] = '\0'; // Zakonczenie tekstu
}

// Funkcja do odszyfrowania tekstu
void DSCr(int n, char a[], char b[]) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            b[i] = (a[i] - 'A' - n + 26) % 26 + 'A';
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            b[i] = (a[i] - 'a' - n + 26) % 26 + 'a';
        } else {
            b[i] = a[i]; // Pozostawienie innych znakow bez zmian
        }
    }
    b[len] = '\0'; // Zakonczenie tekstu
}

int main() {
    int n;
    char a[100], b[100];

    printf("Podaj liczbe szyfru Cezara (n): ");
    scanf("%d", &n);

    printf("Podaj tekst wejsciowy: ");
    scanf(" %[^\n]", a);

    SCr(n, a, b);
    printf("Zaszyfrowany tekst: %s\n", b);

    DSCr(n, b, a);
    printf("Odszyfrowany tekst: %s\n", a);

    return 0;
}


