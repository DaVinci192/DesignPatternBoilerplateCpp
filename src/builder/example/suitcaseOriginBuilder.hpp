#ifndef SUITCAESORIGINBUILDER
#define SUITCASEORIGINBUILDER

#include <string>

class SuitcaseOriginBuilder : public SuitcaseBuilderBase
{
    typedef SuitcaseOriginBuilder Self;

public:
    SuitcaseOriginBuilder(Suitcase& suitcase) : SuitcaseBuilderBase(suitcase) {}

    Self& from(std::string city_and_country)
    {
        suitcase.location_of_origin = city_and_country;
        return *this;
    }

    Self& at(std::string hour_of_arrival)
    {
        suitcase.hour_of_arrival = hour_of_arrival;
        return *this;
    }

    Self& on(std::string date_of_arrival)
    {
        suitcase.date_of_arrival = date_of_arrival;
        return *this;
    }
};


#endif