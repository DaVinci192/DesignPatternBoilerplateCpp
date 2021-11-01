#include <iostream>
#include <string>

#include "builder/example/suitcase.hpp"
#include "builder/example/suitcaseBuilder.hpp"
#include "builder/example/suitcaseSpecificationBuilder.hpp"
#include "builder/example/suitcaseOriginBuilder.hpp"
#include "builder/example/suitcaseDestinationBuilder.hpp"
#include "factory/example/DessertFactory.hpp"
#include "factory/example/MealFactory.hpp"


int main()
{
    MealFactory mf;
    auto cake = mf.make("Cake");


    return 0;
}