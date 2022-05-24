/*
  ==============================================================================

    Beer.cpp
    Created: 24 May 2022 11:27:14pm
    Author:  Nathan J. Hood

  ==============================================================================
*/

#include "Beer.h"

//==============================================================================
Beer::Beer() : Beverage()
{
}

Beer::~Beer()
{
}

//==============================================================================
void Beer::setAmount(float newAmount)
{
    if (amount != newAmount)
    {
        amount = newAmount;
    }
}

void Beer::setVolume(float newVolume)
{
    if (volume != newVolume)
    {
        volume = newVolume;
    }
}

void Beer::setPrice(float newPrice)
{
    if (price != newPrice)
    {
        price = newPrice;
    }
}

void Beer::setPercentage(float newPercentage)
{
    if (percentage != newPercentage)
    {
        percentage = newPercentage;
    }
}

//==============================================================================
float Beer::getAmount()
{
    return amount;
}

float Beer::getVolume()
{
    return volume;
}

float Beer::getPrice()
{
    return price;
}

float Beer::getPercentage()
{
    return percentage;
}