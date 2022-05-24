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