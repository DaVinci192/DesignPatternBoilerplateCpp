#ifndef SUITCASEDESTINATIONBUILDER
#define SUITCASEDESTINATIONBUILDER

#include <string>

class SuitcaseDestinationBuilder : public SuitcaseBuilderBase
{
    typedef SuitcaseDestinationBuilder Self;

public:
    SuitcaseDestinationBuilder(Suitcase& suitcase) : SuitcaseBuilderBase(suitcase) {}

    Self& to(std::string city_and_country)
    {
        suitcase.location_of_destination = city_and_country;
        return *this;
    }

    Self& at(std::string hour_of_departure)
    {
        suitcase.hour_of_departure = hour_of_departure;
        return *this;
    }

    Self& on(std::string date_of_departure)
    {
        suitcase.date_of_departure = date_of_departure;
        return *this;
    }
};


#endif