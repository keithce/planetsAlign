/*
  ==============================================================================

    HeaderComponent.h
    Created: 31 May 2018 4:34:14pm
    Author:  Keith Elliott

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class HeaderComponent : public Component {
public:
    HeaderComponent();

    ~HeaderComponent();

    void paint(Graphics &) override;

    void resized() override;

    const int DEFAULT_SIZE = 100;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HeaderComponent)
};
