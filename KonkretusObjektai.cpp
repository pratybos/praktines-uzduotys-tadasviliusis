//
// Created by viliu on 12/28/2021.
//

#include "KonkretusObjektai.h"
#include <iostream>


KonkretusObjektai::KonkretusObjektai(const string &pavadinimas, double kaina) : pavadinimas(pavadinimas), kaina(kaina) {}

KonkretusObjektai::KonkretusObjektai(const string &vardasArPavadinimas) : vardasArPavadinimas(vardasArPavadinimas) {}


double KonkretusObjektai::Gautikaina() {
    return kaina;
}

void KonkretusObjektai::Gautipavadinimus() {
    cout << pavadinimas << ", " << kaina << endl;

}

void KonkretusObjektai::GautivardusArPav() {
    cout << vardasArPavadinimas  << endl;

}

const string &KonkretusObjektai::getVardasArPavadinimas() const {
    return vardasArPavadinimas;
}

















