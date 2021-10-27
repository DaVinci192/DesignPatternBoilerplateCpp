#include <iostream>
#include <string>

#include "builder/example/suitcase.hpp"
#include "builder/example/suitcaseBuilder.hpp"
#include "builder/example/suitcaseSpecificationBuilder.hpp"
#include "builder/example/suitcaseOriginBuilder.hpp"
#include "builder/example/suitcaseDestinationBuilder.hpp"


int main()
{
    Suitcase s = Suitcase::create()
        .has()
            .id(24)
            .with_weight(30)
            .and_dimensions(2, 2, 5)
        .arrived()
            .from("Ottawa, Canada")
            .at("12h00")
            .on("10/27/2021")
        .departs()
            .to("Vancouver, Canada")
            .at("15h00")
            .on("10/27/2021");
    
    std::cout << s << std::endl;

    return 0;
}