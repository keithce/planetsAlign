//
// Created by Keith Elliott on 6/13/18.
//

#ifndef DECLINATIONLIVING_PERSON_H
#define DECLINATIONLIVING_PERSON_H

#include <string>
#include <juce_core/containers/juce_Array.h>

/**
 * Planet Declination is a pair that contains:
 * std::string - Containing the planet Name
 * float - containing the declination value
 */
using PlanetDeclination = std::pair<std::string, float>;

/**
 * A Person is defined as a set of declinations - one for each planet
 */
class Person {

public:
    Person();
    ~Person();

    juce::Array<PlanetDeclination> calculateDeclinations(float latitude) const;
private:
    juce::Array<PlanetDeclination> m_planets;

};


#endif //DECLINATIONLIVING_PERSON_H
