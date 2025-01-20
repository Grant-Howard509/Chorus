/*
  ==============================================================================

    Parameters.h
    Created: 20 Jan 2025 1:17:23pm
    Author:  Grant Howard

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

const juce::ParameterID gainParamID { "gain", 1 };

class Parameters
{
public:
    Parameters(juce::AudioProcessorValueTreeState& apvts);
    
    static juce::AudioProcessorValueTreeState::ParameterLayout createParameterLayout();
    
    float gain = 0.0f;
    
private:
    juce::AudioParameterFloat* gainParam;
};
