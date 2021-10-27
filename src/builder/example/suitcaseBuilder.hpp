#ifndef SUITCASEBUILDER
#define SUITCASEBUILDER

#include "suitcase.hpp"
#include <string>

class SuitcaseOriginBuilder;
class SuitcaseDestinationBuilder;
class SuitcaseSpecificationBuilder;


class SuitcaseBuilderBase
{
protected:
    Suitcase&  suitcase;
    SuitcaseBuilderBase(Suitcase& suitcase);

public:
    operator Suitcase() const
    {
        return std::move(suitcase);
    }

    SuitcaseOriginBuilder arrived() const;
    SuitcaseDestinationBuilder departs() const;
    SuitcaseSpecificationBuilder has() const;

};


class SuitcaseBuilder : public SuitcaseBuilderBase
{
    Suitcase s;

public:
    SuitcaseBuilder();
};



#endif 