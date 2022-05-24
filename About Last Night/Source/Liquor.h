/*
  ==============================================================================

    Liquor.h
    Created: 25 May 2022 1:12:21am
    Author:  Nathan J. Hood

  ==============================================================================
*/

#pragma once

#ifndef LIQUOR_H_INCLUDED
#define LIQUOR_H_INCLUDED

#include "Beverage.h"

class Liquor : public Beverage
{
public:
    //==========================================================================
    Liquor();
    ~Liquor() override;

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

#endif // LIQUOR_H_INCLUDED