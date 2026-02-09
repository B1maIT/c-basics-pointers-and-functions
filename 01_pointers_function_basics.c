#include <stdio.h>
#include <stdlib.h>

// Funkcja obliczajaca NWD dwoch liczb
int nwd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funkcja obliczajaca NWW dwoch liczb
int nww(int a, int b) {
    return (a * b) / nwd(a, b);
}

int main() {
    int a, b;
    printf("Podaj dwie liczby naturalne (oddzielone spacja): ");
    scanf("%d %d", &a, &b);

    int gcd = nwd(a, b);
    int lcm = nww(a, b);

    printf("Największy wspolny dzielnik (NWD) dla %d i %d: %d\n", a, b, gcd);
    printf("Najmniejsza wspolna wielokrotnosc (NWW) dla %d i %d: %d\n", a, b, lcm);

    return 0;
}
