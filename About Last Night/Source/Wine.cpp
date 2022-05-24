/*
  ==============================================================================

    Wine.cpp
    Created: 25 May 2022 1:09:33am
    Author:  Nathan J. Hood

  ==============================================================================
*/

#include "Wine.h"

//==============================================================================
Wine::Wine() : Beverage()
{
}

Wine::~Wine()
{
}

//==============================================================================
void Wine::setAmount(float newAmount)
{
    if (amount != newAmount)
    {
        amount = newAmount;
    }
}

void Wine::setVolume(float newVolume)
{
    if (volume != newVolume)
    {
        volume = newVolume;
    }
}

void Wine::setPrice(float newPrice)
{
    if (price != newPrice)
    {
        price = newPrice;
    }
}

void Wine::setPercentage(float newPercentage)
{
    if (percentage != newPercentage)
    {
        percentage = newPercentage;
    }
}

//==============================================================================
float Wine::getAmount()
{
    return amount;
}

float Wine::getVolume()
{
    return volume;
}

float Wine::getPrice()
{
    return price;
}

float Wine::getPercentage()
{
    return percentage;
}