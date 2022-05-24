/*
  ==============================================================================

    Beverage.h
    Created: 24 May 2022 11:09:02pm
    Author:  Nathan J. Hood

  ==============================================================================
*/

#pragma once

#ifndef BEVERAGE_H_INCLUDED
#define BEVERAGE_H_INCLUDED

class Beverage
{
protected:
    //==========================================================================
    /** Constructor. */
    Beverage();

public:
    //==========================================================================
    /** Destructor. */
    virtual ~Beverage();

    //==========================================================================
    /** Number consumed of this beverage. */
    virtual void setAmount(float amount);

    /** Size per serving (cl) as found on label. */
    virtual void setVolume(float volume);

    /** Price per serving. */
    virtual void setPrice(float price);

    /** Alcohol by volume (ABV%) as found on label. */
    virtual void setPercentage(float percentage);

    //==========================================================================
    /** Returns number consumed of this beverage. */
    virtual float getAmount();

    /** Returns size per serving (cl) as found on label. */
    virtual float getVolume();

    /** Returns price per serving. */
    virtual float getPrice();

    /** Returns alcohol by volume (ABV%) as found on label. */
    virtual float getPercentage();

private:
    //==========================================================================
    float amount = 0.0f;
    float volume = 0.0f;
    float price = 0.0f;
    float percentage = 0.0f;
};

#endif // BEVERAGE_H_INCLUDED

/** 

Why have a .h AND a .cpp file? 

Well, the main reason would be for separating the interface from the 
implementation. The header declares "what" a class (or whatever is being 
implemented) will do, while the cpp file defines "how" it will perform those 
features. This reduces dependencies so that code that uses the header doesn't 
necessarily need to know all the details of the implementation and any other 
classes/headers needed only for that. This will reduce compilation times and 
also the amount of recompilation needed when something in the implementation 
changes.

The header file is thus necessary, because the C++ compiler is unable to search 
for symbol declarations alone, and thus, you must help it by including those 
declarations.

One last word: You should put header guards around the content of your HPP 
files, to be sure multiple inclusions won't break anything, but all in all, I 
believe the main reason for existence of HPP files is explained above.

#ifndef B_HPP_
#define B_HPP_ // The declarations in the B.hpp file

#endif // B_HPP_

or even simpler (although not standard)

#pragma once // The declarations in the B.hpp file

*/