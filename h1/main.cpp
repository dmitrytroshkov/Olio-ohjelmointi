#include <iostream>
#include <iomanip> // Tarvitaan osamäärän tulostamiseen kahdella desimaalilla

// Funktio summan laskemiseen ja palauttamiseen
int retSum(int a, int b) {
    return a + b; // Palautetaan summa
}

// Funktio osamäärän laskemiseen ja palauttamiseen
float retDiv(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b; // Palautetaan osamäärä
    } else {
        std::cout << "Osamäärä ei ole määritelty (jakaminen nollalla)." << std::endl;
        return 0; // Palautetaan nolla, jos jakaja on nolla
    }
}

int main() {
    int a, b;

    // Kysytään käyttäjältä luvut
    std::cout << "Syötä ensimmäinen kokonaisluku (a): ";
    std::cin >> a;
    std::cout << "Syötä toinen kokonaisluku (b): ";
    std::cin >> b;

    // Kutsutaan funktioita ja tallennetaan palautetut arvot
    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    // Tulostetaan tulokset
    std::cout << "Summa: " << summa << std::endl;
    std::cout << "Osamäärä: " << std::fixed << std::setprecision(2) << osamaara << std::endl;

    return 0;
}
