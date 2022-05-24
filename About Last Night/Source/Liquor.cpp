/*
  ==============================================================================

    Liquor.cpp
    Created: 25 May 2022 1:12:21am
    Author:  Nathan J. Hood

  ==============================================================================
*/

#include "Liquor.h"

//==============================================================================
Liquor::Liquor() : Beverage()
{
}

Liquor::~Liquor()
{
}

//==============================================================================
void Liquor::setAmount(float newAmount)
{
    if (amount != newAmount)
    {
        amount = newAmount;
    }
}

void Liquor::setVolume(float newVolume)
{
    if (volume != newVolume)
    {
        volume = newVolume;
    }
}

void Liquor::setPrice(float newPrice)
{
    if (price != newPrice)
    {
        price = newPrice;
    }
}

void Liquor::setPercentage(float newPercentage)
{
    if (percentage != newPercentage)
    {
        percentage = newPercentage;
    }
}

//==============================================================================
float Liquor::getAmount()
{
    return amount;
}

float Liquor::getVolume()
{
    return volume;
}

float Liquor::getPrice()
{
    return price;
}

float Liquor::getPercentage()
{
    return percentage;
}