/*
  ==============================================================================

    Calculator.cpp
    Created: 25 May 2022 1:12:51am
    Author:  natha

  ==============================================================================
*/

#include "Calculator.h"

Calculator::Calculator()
{
}

void Calculator::calculateDrink(float amount, float size, float price, float percentage)
{
    totalAmount = amount;
    totalSize = size * amount;
    totalPrice = price * amount;

}
