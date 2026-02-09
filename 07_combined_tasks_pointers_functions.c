#include <stdio.h>
#include <string.h>

// Struktura przechowujaca dane
struct DaneOsobowe {
    char imie[50];
    char nazwisko[50];
    char pesel[12];
    char zainteresowania[256];
};

// Funkcja wczytujaca dane
struct DaneOsobowe wczytajDane() {
    struct DaneOsobowe dane;

    printf("Podaj imie: ");
    scanf("%s", dane.imie);

    printf("Podaj nazwisko: ");
    scanf("%s", dane.nazwisko);

    printf("Podaj PESEL: ");
    scanf("%s", dane.pesel);

    printf("Podaj zainteresowania (do 256 znaków): ");
    scanf(" %[^\n]", dane.zainteresowania);

    return dane;
}

// Funkcja wypisujaca dane
void wypiszDane(struct DaneOsobowe dane) {
    printf("Imie: %s\n", dane.imie);
    printf("Nazwisko: %s\n", dane.nazwisko);
    printf("PESEL: %s\n", dane.pesel);
    printf("Zainteresowania: %s\n", dane.zainteresowania);
}

int main() {
    struct DaneOsobowe dane = wczytajDane();
    wypiszDane(dane);

    return 0;
}
