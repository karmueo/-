#pragma once
#include "OnlineShopping.h"
class TaoBao :
    public OnlineShopping
{
public:
    virtual void selectProduct();
    virtual void addToCart();
    virtual void account();
};

