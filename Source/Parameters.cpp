/*
  ==============================================================================

    Parameters.cpp
    Created: 20 Jan 2025 1:17:23pm
    Author:  Grant Howard

  ==============================================================================
*/

#include "Parameters.h"

Parameters::Parameters(juce::AudioProcessorValueTreeState& apvts)
{
    auto* param = apvts.getParameter(gainParamID.getParamID());
    
    gainParam = dynamic_cast<juce::AudioParameterFloat*>(param);
}

juce::AudioProcessorValueTreeState::ParameterLayout Parameters::createParameterLayout()
{
    juce::AudioProcessorValueTreeState::ParameterLayout layout;
    
    layout.add(std::make_unique<juce::AudioParameterFloat>(gainParamID,
                                                           "Gain",
                                                           juce::NormalisableRange<float>(-12.0f, 12.0f, 0.01f),
                                                           0.0f));
    
    return layout;
}
