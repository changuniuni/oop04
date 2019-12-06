#ifndef SORTABLE_VECTOR_HPP
#define SORTABLE_VECTOR_HPP

#include "my_vector.hpp"
#include "sortable.hpp"

template<class T>
class sortable_vector : public sortable<T>, public my_vector<T>
{
public:
    /*********************************
     * Fill in the class definition
     ********************************/

    ~sortable_vector() override {}
};

#include "sortable_vector.tcc"

#endif
