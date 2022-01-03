//
// Created by viliu on 12/27/2021.
//

#include "Composite.h"
#include "Color.h"

Composite::Composite(const string &name) : name(name) {}

double Composite::GetPrice() {
    double InTotal = 0;
    for (Component *c: components) {
        InTotal += c->GetPrice();

    }


    return InTotal;
}

void Composite::ReflectInformation() {
    Color::setColor(10);
    cout << "***********************************" << endl;
    cout << name << endl;
    cout << "***********************************" << endl;
    Color::setColor(13);
    for (Component *c: components) {
        c->ReflectInformation();
    }

}

void Composite::AddComponent(Component *component) {
    components.emplace_back(component);

}
