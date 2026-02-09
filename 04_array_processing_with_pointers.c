#include <stdio.h>
#include <stdlib.h>


// Funkcja obliczajaca iloczyn T1 * T2 i zapisujaca wynik w T3
void oblicz_iloczyn(int T1, int T2, int T3[3][2]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            T3[i][j] = T1 * T2;
        }
    }
}

int main() {
    int T1, T2;
    printf("Podaj wartosc T1: ");
    scanf("%d", &T1);
    printf("Podaj wartosc T2: ");
    scanf("%d", &T2);

    int T3[3][2];
    oblicz_iloczyn(T1, T2, T3);

    printf("\nT1: %d\nT2: %d\nT3:\n", T1, T2);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%10d", T3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
