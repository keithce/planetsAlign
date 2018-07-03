//
// Created by Keith Elliott on 6/13/18.
//

#include "Person.h"
#include "Calculator.h"

Person::Person() {}

juce::Array<PlanetDeclination> Person::calculateDeclinations(float latitude) const {
    juce::Array<PlanetDeclination> calculatedValues(m_planets);
    std::for_each(calculatedValues.getFirst(), calculatedValues.getLast(),
                  [latitude](PlanetDeclination &planetDeclination){planetDeclination.second = Calculator::calculateOffset(planetDeclination.second, latitude);});
    return calculatedValues;
}
