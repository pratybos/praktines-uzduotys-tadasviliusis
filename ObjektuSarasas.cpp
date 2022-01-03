//
// Created by viliu on 12/28/2021.
//

#include "ObjektuSarasas.h"
#include "SpalvosPaketas.h"
#include <iostream>

ObjektuSarasas::ObjektuSarasas(const string &vardasArPavadinimas) : vardasArPavadinimas(vardasArPavadinimas){}

double ObjektuSarasas::Gautikaina() {
    double Suma = 0;
    for (SudedamojiDalis* s: sarasas){
        Suma += s->Gautikaina();
    }

    return Suma;
}


void ObjektuSarasas::GautivardusArPav() {
    SpalvosPaketas::KeistiSpalva(9);
    cout << "***********************************" << endl;
    cout <<  vardasArPavadinimas << endl;
    cout << "***********************************" << endl;
    SpalvosPaketas::KeistiSpalva(6);
    for(SudedamojiDalis* s: varduSarasas){
        s->GautivardusArPav();
    }

}


void ObjektuSarasas::Gautipavadinimus() {
    SpalvosPaketas::KeistiSpalva(9);
    cout << "***********************************" << endl;
    cout << vardasArPavadinimas << pavadinimas <<  endl;
    cout << "***********************************" << endl;
    SpalvosPaketas::KeistiSpalva(6);
    for(SudedamojiDalis* s: sarasas){
        s->Gautipavadinimus();

}

}


void ObjektuSarasas::PildytiSarasa(SudedamojiDalis *sudedamojiDalis) {
    sarasas.emplace_back(sudedamojiDalis);

}

void ObjektuSarasas::PildytiVardusPavadinimus(SudedamojiDalis *vardas) {
    varduSarasas.emplace_back(vardas);

}









