#ifndef SUITCASESPECIFICATIONBUILDER
#define SUITCASESPECIFICATIONBUILDER

#include <string>

class SuitcaseSpecificationBuilder : public SuitcaseBuilderBase
{
    typedef SuitcaseSpecificationBuilder Self;

public:
    SuitcaseSpecificationBuilder(Suitcase& suitcase) : SuitcaseBuilderBase(suitcase) {}

    Self& id(int id)
    {
        suitcase.id = id;
        return *this;
    }

    Self& with_weight(int weight)
    {
        suitcase.weight = weight;
        return *this;
    }

    Self& and_dimensions(int length, int width, int height)
    {
        suitcase.length = length;
        suitcase.width = width;
        suitcase.height = height;
        return *this;
    }
};


#endif