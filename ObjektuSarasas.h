//
// Created by viliu on 12/28/2021.
//

#ifndef KETVIRTAUZDV_OBJEKTUSARASAS_H
#define KETVIRTAUZDV_OBJEKTUSARASAS_H

#include "KonkretusObjektai.h"
#include <iostream>
#include "SudedamojiDalis.h"
#include <vector>
using namespace std;

class ObjektuSarasas : public virtual SudedamojiDalis{
public:
    explicit ObjektuSarasas(const string &pavadinimas);

    double Gautikaina() override;
    void GautivardusArPav() override;
    void Gautipavadinimus() override;
    void PildytiSarasa(SudedamojiDalis *sudedamojiDalis);
    void PildytiVardusPavadinimus(SudedamojiDalis *vardas);



private:
    string pavadinimas;
    string vardasArPavadinimas;
    double kaina;
    vector<SudedamojiDalis*> sarasas;
    vector<SudedamojiDalis*> varduSarasas;

};


#endif //KETVIRTAUZDV_OBJEKTUSARASAS_H
