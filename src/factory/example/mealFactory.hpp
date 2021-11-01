#ifndef MEALFACTORY
#define MEALFACTORY
#include "dessert.hpp"
#include "dessertFactory.hpp"

#include <iostream>
#include <string>
#include <map>

class MealFactory
{
    std::map<std::string, std::unique_ptr<DessertFactory>> dessert_factories;

public:
    MealFactory()
    {
        dessert_factories["Ice Cream"] = std::make_unique<IceCreamFactory>();
        dessert_factories["Cake"] = std::make_unique<CakeFactory>();
    }

    std::unique_ptr<Dessert> make(const std::string& name)
    {
        auto dessert = dessert_factories[name]->make();
        dessert->make(2);
        return dessert;
    }


};


#endif