//
// Created by nicholas on 21/05/19.
//

#ifndef FOREST_ARRAYSPAN_H
#define FOREST_ARRAYSPAN_H

#include <cstddef>

namespace forest {
    /// This class represents a view of items in continuous memory.
    /// It is a stand-in until C++20 introduces std::span
    template<typename T>
    class ArraySpan {
    private:
        T* ptr_{nullptr};
        ptrdiff_t size_{0};

    public:
        ArraySpan() = default;

        ArraySpan(T* ptr, ptrdiff_t size) : ptr_(ptr), size_(size) {}

        T* ptr() const {
          return ptr_;
        }

        ptrdiff_t size() const {
          return size_;
        }


    };
}

#endif //FOREST_ARRAYSPAN_H
