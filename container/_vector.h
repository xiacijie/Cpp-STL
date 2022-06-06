#pragma once 

#include <memory>

namespace __ {
    template<class T, class Alloc>
    class vector {
        typedef T value_type;
        typedef value_type* pointer;
        typedef value_type* iterator;
    };
}