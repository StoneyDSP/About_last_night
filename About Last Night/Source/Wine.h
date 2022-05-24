/*
  ==============================================================================

    Wine.h
    Created: 25 May 2022 1:09:33am
    Author:  Nathan J. Hood

  ==============================================================================
*/

#pragma once

#ifndef WINE_H_INCLUDED
#define WINE_H_INCLUDED

#include "Beverage.h"

class Wine : public Beverage
{
public:
    //==========================================================================
    Wine();
    ~Wine() override;

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
    float amount = { 0.0f };
    float volume = { 0.0f };
    float price = { 0.0f };
    float percentage = { 0.0f };
};

#endif // WINE_H_INCLUDED