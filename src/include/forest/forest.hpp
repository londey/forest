#ifndef FOREST_FOREST_HPP
#define FOREST_FOREST_HPP

#include "forest.detail.hpp"
#include "subforest.hpp"

#include <vector>

namespace forest
{
/// This class implements a container of values organized in list of tree
/// structures
template <typename T>
class forest
{
    std::vector<detail::forest_node<T>> nodes_;

    operator subforest<T>() &
    {
    }

    operator subforest<const T>() const &
    {
    }
};

} // namespace forest

#endif
