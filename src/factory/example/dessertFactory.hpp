#ifndef DESSERTFACTORY
#define DESSERTFACTORY
#include "dessert.hpp"

#include <iostream>
#include <string>


struct DessertFactory // Abstract Factory
{
    virtual std::unique_ptr<Dessert> make() const = 0;
};

struct IceCreamFactory : DessertFactory
{
    std::unique_ptr<Dessert> make() const override 
    {
        return std::make_unique<IceCream>();
    }
};

struct CakeFactory : DessertFactory
{
    std::unique_ptr<Dessert> make() const override 
    {
        return std::make_unique<Cake>();
    }
};

#endif