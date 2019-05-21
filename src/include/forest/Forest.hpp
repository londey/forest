#ifndef FOREST_FOREST_HPP
#define FOREST_FOREST_HPP

#include "Forest.detail.hpp"
#include "subforest.hpp"

#include <vector>

namespace forest
{
/// This class implements a container of values organized in list of tree
/// structures
template <typename T>
class Forest
{
private:
    std::vector<detail::forest_node<T>> nodes_;

public:
    Forest() = default;

    operator subforest<T>() &
    {
    }

    operator subforest<const T>() const &
    {
    }
};

} // namespace forest

#endif
