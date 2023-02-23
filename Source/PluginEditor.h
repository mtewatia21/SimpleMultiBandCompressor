/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Simple_Multi_Band_CompressorAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Simple_Multi_Band_CompressorAudioProcessorEditor (Simple_Multi_Band_CompressorAudioProcessor&);
    ~Simple_Multi_Band_CompressorAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Simple_Multi_Band_CompressorAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Simple_Multi_Band_CompressorAudioProcessorEditor)
};
