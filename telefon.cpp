#include <iostream>

using namespace std;

class Alkalmazas {
    string nev = "";
    double meret = 0;

public:
    Alkalmazas(const string &nev, double meret) : nev(nev), meret(meret) {}

    Alkalmazas() = default;

    const string &get_nev() const {
        return nev;
    }

    double get_meret() const {
        return meret;
    }

};

class Telefon {
    string nev;
    Alkalmazas alkalmazasok[10];

public:
    Telefon(const string &nev) : nev(nev) {}

};
