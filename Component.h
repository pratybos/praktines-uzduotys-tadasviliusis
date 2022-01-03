//
// Created by viliu on 12/27/2021.
//

#ifndef ANTRAUZDV_COMPONENT_H
#define ANTRAUZDV_COMPONENT_H

class Component {
public:
    virtual double GetPrice() = 0;

    virtual void ReflectInformation() = 0;
};

#endif //ANTRAUZDV_COMPONENT_H
