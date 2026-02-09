#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funkcja generujaca losowa liczbe z przedzialu [a, b]
int losowaLiczba(int a, int b) {
    return rand() % (b - a + 1) + a;
}

int main() {
    int n, a, b;

    // Wczytanie danych wejsciowych
    printf("Podaj ilosc elementow (n): ");
    scanf("%d", &n);
    printf("Podaj dolny zakres (a): ");
    scanf("%d", &a);
    printf("Podaj gorny zakres (b): ");
    scanf("%d", &b);

    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    // Tworzenie tablicy i wypelnianie losowymi liczbami
    int Tab[n];
    for (int i = 0; i < n; i++) {
        Tab[i] = losowaLiczba(a, b);
    }

    // Wyswietlanie elementow tablicy
    printf("\nElementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d ", Tab[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
