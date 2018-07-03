//
// Created by Keith Elliott on 6/13/18.
//

#include <cmath>
#include "Calculator.h"

float Calculator::calculateOffset(const float planetDecl, float latitude) {
    if (latitude < 0)
        latitude = abs(latitude);

    float minimum = latitude;
    int multiplier = 1;
    auto found = false;
    while (!found) {
        float newMinimum = latitude - (planetDecl * multiplier);
        if (newMinimum < 0) {
            found = true;
            newMinimum = abs(newMinimum);
        }
        if (newMinimum < minimum) {
            minimum = newMinimum;
            multiplier++;
        }
    }
    return minimum;
}
