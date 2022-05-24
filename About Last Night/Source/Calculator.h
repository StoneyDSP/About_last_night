/*
  ==============================================================================

    Calculator.h
    Created: 25 May 2022 1:12:51am
    Author:  Nathan J. Hood

  ==============================================================================
*/

#pragma once

#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

class Calculator
{
public:
    Calculator();

    void calculateDrink(float amount, float size, float price, float percentage);

private:
    float totalAmount = { 0.0f };
    float totalSize = { 0.0f };
    float totalPrice = { 0.0f };
    float totalPercentage = { 0.0f };
};

#endif //CALCULATOR_H_INCLUDED
