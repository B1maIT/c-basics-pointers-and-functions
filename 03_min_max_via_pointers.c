#include <stdio.h>
#include <stdlib.h>

// Funkcja znajdujaca maksymalny i minimalny element w tablicy
void find_min_max(int Tab[], int n, int *a, int *b) {
    if (n <= 0) {
        printf("Tablica jest pusta.\n");
        return;
    }

    *a = Tab[0]; // Inicjalizacja a i b pierwszym elementem tablicy
    *b = Tab[0];

    for (int i = 1; i < n; ++i) {
        if (Tab[i] > *a) {
            *a = Tab[i]; // Aktualizacja a, jesli znaleziono wiekszy element
        }
        if (Tab[i] < *b) {
            *b = Tab[i]; // Aktualizacja b, jesli znaleziono mniejszy element
        }
    }
}

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    int Tab[n];
    printf("Podaj %d liczb oddzielonych spacjami: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &Tab[i]);
    }

    int a, b;
    find_min_max(Tab, n, &a, &b);

    printf("\nTablica (+ naglowek):\n");
    for (int i = 0; i < n; ++i) {
        printf("%-10d", Tab[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\nMaksymalny element: %d\nMinimalny element: %d\n", a, b);

    return 0;
}

