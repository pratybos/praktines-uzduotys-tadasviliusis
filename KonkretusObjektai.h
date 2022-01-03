//
// Created by viliu on 12/28/2021.
//

#ifndef KETVIRTAUZDV_KONKRETUSOBJEKTAI_H
#define KETVIRTAUZDV_KONKRETUSOBJEKTAI_H

#include <iostream>
#include "SudedamojiDalis.h"
using namespace std;

class KonkretusObjektai : public virtual SudedamojiDalis{
public:

    void Gautipavadinimus() override;
    void GautivardusArPav() override;
    double Gautikaina() override;
    KonkretusObjektai(const string &pavadinimas, double kaina);

    const string &getVardasArPavadinimas() const;

    explicit KonkretusObjektai(const string &vardasArPavadinimas);
private:
    string pavadinimas;
    string vardasArPavadinimas;
    double kaina;

};


#endif //KETVIRTAUZDV_KONKRETUSOBJEKTAI_H
