//
// Created by viliu on 12/27/2021.
//

#ifndef ANTRAUZDV_LEAF_H
#define ANTRAUZDV_LEAF_H

#include <iostream>
#include "Component.h"

using namespace std;

class Leaf : public virtual Component {
public:

    double GetPrice() override;

    void ReflectInformation() override;

    Leaf(const string &name, double price);

private:
    string name;
    double price;


};


#endif //ANTRAUZDV_LEAF_H
