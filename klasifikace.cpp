
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>

const int STUDENTI = 6;
const int PREDMETY = 4;

std::array<std::string, STUDENTI> jmena = {"Adam", "Eva", "Jan", "Lucie", "Marek", "Petra"};
std::array<std::string, PREDMETY> predmety = {"PRG", "MAT", "CJL", "ANJ"};

int znamky[STUDENTI][PREDMETY] = {
    {1, 2, 3, 1},
    {2, 2, 1, 1},
    {3, 4, 2, 3},
    {1, 1, 1, 2},
    {5, 3, 4, 4},
    {2, 3, 2, 2}
};

// ===== Funkce – student A =====
void vypisTabulku(const int (&z)[STUDENTI][PREDMETY]) {

    for (int j = 0; j < predmety.size(); j++) {
        std::cout << std::setw(6) << predmety[j];
    }

    std::cout << std::endl;

    for (int i = 0; i < jmena.size(); i++) {
        std::cout << std::setw(10) << jmena[i];

        for (int j = 0; j < predmety.size(); j++) {
            std::cout << std::setw(6) << z[i][j];
        }

        std::cout << std::endl;
    }
}

// ===== Funkce – student B =====

int main() {
    // --- student A ---
    vypisTabulku(znamky);

    // --- student B ---

    return 0;
}
