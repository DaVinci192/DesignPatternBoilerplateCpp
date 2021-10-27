#include "suitcaseBuilder.hpp"
#include "suitcaseOriginBuilder.hpp"
#include "suitcaseDestinationBuilder.hpp"
#include "suitcaseSpecificationBuilder.hpp"

SuitcaseBuilderBase::SuitcaseBuilderBase(Suitcase& suitcase) : suitcase(suitcase) {}

SuitcaseBuilder::SuitcaseBuilder() : SuitcaseBuilderBase(s) {}

SuitcaseOriginBuilder SuitcaseBuilderBase::arrived() const
{
    return SuitcaseOriginBuilder{suitcase};
}

SuitcaseDestinationBuilder SuitcaseBuilderBase::departs() const
{
    return SuitcaseDestinationBuilder{suitcase};
}

SuitcaseSpecificationBuilder SuitcaseBuilderBase::has() const
{
    return SuitcaseSpecificationBuilder{suitcase};
}
