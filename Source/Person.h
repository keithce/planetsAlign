//
// Created by Keith Elliott on 6/13/18.
//

#ifndef DECLINATIONLIVING_PERSON_H
#define DECLINATIONLIVING_PERSON_H

#include <string>
#include <juce_core/containers/juce_Array.h>

typedef std::pair<std::string, float> planet_declination;

class Person {
public:
    Person();

private:
    juce::Array<planet_declination> m_planets;
};


#endif //DECLINATIONLIVING_PERSON_H
