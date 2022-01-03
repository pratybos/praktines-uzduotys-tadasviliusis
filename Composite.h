//
// Created by viliu on 12/27/2021.
//

#ifndef ANTRAUZDV_COMPOSITE_H
#define ANTRAUZDV_COMPOSITE_H

#include <iostream>
#include "Component.h"
#include <vector>
using namespace std;

class Composite : public virtual Component {
public:
    Composite(const string &name);

    double GetPrice() override;
    void ReflectInformation() override;
    void AddComponent(Component *components);

private:
    string name;
    vector<Component*> components;
};


#endif //ANTRAUZDV_COMPOSITE_H
