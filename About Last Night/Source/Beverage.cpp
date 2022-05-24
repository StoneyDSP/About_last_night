/*
  ==============================================================================

    Beverage.cpp
    Created: 24 May 2022 11:07:09pm
    Author:  Nathan J. Hood

  ==============================================================================
*/

#include "Beverage.h"

//==============================================================================
Beverage::Beverage()
{
}

Beverage::~Beverage()
{
}

//==============================================================================
void Beverage::setAmount(float newAmount)
{
    if (amount != newAmount)
    {
        amount = newAmount;
    }
}

void Beverage::setVolume(float newVolume)
{
    if (volume != newVolume)
    {
        volume = newVolume;
    }
}

void Beverage::setPrice(float newPrice)
{
    if (price != newPrice)
    {
        price = newPrice;
    }
}

void Beverage::setPercentage(float newPercentage)
{
    if (percentage != newPercentage)
    {
        percentage = newPercentage;
    }
}

//==============================================================================
float Beverage::getAmount()
{
    return amount;
}

float Beverage::getVolume()
{
    return volume;
}

float Beverage::getPrice()
{
    return price;
}

float Beverage::getPercentage()
{
    return percentage;
}