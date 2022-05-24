/*
  ==============================================================================

    Beer.h
    Created: 24 May 2022 11:27:14pm
    Author:  Nathan J. Hood

  ==============================================================================
*/

#pragma once

#ifndef BEER_H_INCLUDED
#define BEER_H_INCLUDED

#include "Beverage.h"

class Beer : public Beverage
{
public:
    //==========================================================================
    Beer();
    ~Beer() override;

    //==========================================================================
    void setAmount(float newAmount);
    void setVolume(float newVolume);
    void setPrice(float newPrice);
    void setPercentage(float newPercentage);

    //==========================================================================
    float getAmount();
    float getVolume();
    float getPrice();
    float getPercentage();

private:
    //==============================================================================
    float amount        = { 0.0f };
    float volume        = { 0.0f };
    float price         = { 0.0f };
    float percentage    = { 0.0f };
};

#endif // BEER_H_INCLUDED