#ifndef SUITCASE
#define SUITCASE

#include <iostream>
#include <string>

class SuitcaseBuilder;

class Suitcase
{
    // location, time of arrival
    std::string location_of_origin, date_of_arrival, hour_of_arrival;

    // destination
    std::string location_of_destination, date_of_departure, hour_of_departure;

    // specifications
    int length, width, height, weight, id;

public:
    static SuitcaseBuilder create();

    friend std::ostream& operator<<(std::ostream& os, const Suitcase& obj)
    {
        return os
            << "Suitcase ID Number: " << obj.id << std::endl
            << "Suitcase Weight: " << obj.weight << std::endl
            << "Suitcase Dimensions (l/w/h): " 
                << obj.length << "/"
                << obj.width << "/"
                << obj.height << std::endl
            << "Suitcase arrived from " << obj.location_of_origin
            << " at " << obj.hour_of_arrival << " on " << obj.date_of_arrival << std::endl
            << "Suitcase departs for " << obj.location_of_destination
            << " at " << obj.hour_of_departure << " on " << obj.date_of_departure << std::endl; 
    }

    friend class SuitcaseBuilder;
    friend class SuitcaseOriginBuilder;
    friend class SuitcaseDestinationBuilder;
    friend class SuitcaseSpecificationBuilder;


};




#endif 