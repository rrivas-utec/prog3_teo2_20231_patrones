//
// Created by rrivas on 21/08/2023.
//

#ifndef PROG3_TEO2_20231_PATRONES_UVECTOR_H
#define PROG3_TEO2_20231_PATRONES_UVECTOR_H

#include <utility>
#include <iostream>
#include <initializer_list>

namespace utec {
//    typedef int TYPE;
//    typedef std::size_t SIZE_TYPE;

    using TYPE = int;
    using SIZE_TYPE = std::size_t;

    class vector {
        SIZE_TYPE sz = SIZE_TYPE();
        TYPE* data = nullptr;
    public:
        vector() = default;
        vector(std::initializer_list<TYPE> lst);
        vector(const utec::vector& other);
        vector operator=(const utec::vector& other);

        ~vector();
        [[nodiscard]] SIZE_TYPE size() const;
        TYPE get_item(SIZE_TYPE index);
        TYPE operator[](SIZE_TYPE index) const;  // Get
        TYPE& operator[](SIZE_TYPE index);       // Set
        friend std::ostream& operator<<(std::ostream& out, const utec::vector& v);
    };

    std::ostream& operator<<(std::ostream& out, const utec::vector& v);
}
#endif //PROG3_TEO2_20231_PATRONES_UVECTOR_H
