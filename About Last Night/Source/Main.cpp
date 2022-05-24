/*
  ==============================================================================

    This file contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Beverage.h"
#include "Beer.h"

Beer beer;
//==============================================================================
int main (int argc, char* argv[])
{

    // ..your code goes here!

    std::cout << "ABOUT LAST NIGHT... (v0.01)";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "*** DISCLAIMER - this application can only provide you with approximations, and should not be taken as legal, medical, nor fiscal guidance ***";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Please consult your GP for more information about alcohol consumption.";
    std::cout << "\n";
    std::cout << "\n";

    float amt = 5.9f;

    beer.setAmount(amt);

    std::cout << beer.getAmount();
    std::cout << "\n";
    std::cout << "\n";

    return 0;
}
