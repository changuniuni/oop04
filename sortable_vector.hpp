#ifndef SORTABLE_VECTOR_HPP
#define SORTABLE_VECTOR_HPP

#include "my_vector.hpp"
#include "sortable.hpp"

template<class T>
class sortable_vector : public sortable<T>, public my_vector<T>
{
public:
	sortable_vector() : my_vector<T>() {std::cout<<"con\n";}
    ~sortable_vector() override {}
private:

};

#include "sortable_vector.tcc"

#endif
