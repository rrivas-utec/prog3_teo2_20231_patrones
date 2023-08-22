//
// Created by rrivas on 21/08/2023.
//

#include "uvector.h"

utec::vector::vector(std::initializer_list<TYPE> lst) {
    sz = lst.size();
    data = new TYPE [sz];
    auto it = lst.begin();
    for (int i = 0; i < sz; ++i) {
        data[i] = *it;
        ++it;
    }
}

utec::SIZE_TYPE utec::vector::size() const {
    return sz;
}

utec::TYPE utec::vector::get_item(utec::SIZE_TYPE index) {
    return data[index];
}

utec::TYPE utec::vector::operator[](utec::SIZE_TYPE index) const{
    return data[index];
}

utec::vector::~vector() {
    delete [] data;
}

std::ostream &utec::operator<<(std::ostream& out,
        const utec::vector &v) {
    /*
    for (int i = 0; i < v.size(); ++i)
        out << v[i] << " ";
    return out;
    */
    for (int i = 0; i < v.sz; ++i)
        out << v.data[i] << " ";
    return out;
}

utec::TYPE &utec::vector::operator[](utec::SIZE_TYPE index) {
    return data[index];
}

utec::vector::vector(const utec::vector &other) {
    sz = other.sz;
    data = new TYPE [sz];
    for (int i = 0; i < sz; ++i) {
        data[i] = other.data[i];
    }

}

utec::vector utec::vector::operator=(const utec::vector &other) {
    delete [] data;
    sz = other.sz;
    data = new TYPE [sz];
    for (int i = 0; i < sz; ++i) {
        data[i] = other.data[i];
    }
    return *this;
}
