//
// Created by viliu on 12/27/2021.
//

#include "Leaf.h"

Leaf::Leaf(const string &name, double price) : name(name), price(price) {}

double Leaf::GetPrice() {
    return price;
}

void Leaf::ReflectInformation() {
    cout << name << ", " << price << endl;

}
