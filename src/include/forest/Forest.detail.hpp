#ifndef FOREST_FOREST_DETAIL_HPP
#define FOREST_FOREST_DETAIL_HPP

#include <cstddef>
#include <utility>

namespace forest::detail
{
template <typename T>
struct forest_node
{
    using offset = std::ptrdiff_t;

    T value_{};
    offset offset_{0};
    bool hasChildren_{false};

    template <typename FT>
    forest_node(FT &&value) : value_{std::forward<FT>(value)} {}
};

}

#endif
