#ifndef SORTABLE_VECTOR_HPP
#define SORTABLE_VECTOR_HPP

#include "my_vector.hpp"
#include "sortable.hpp"

template<class T>
class sortable_vector : public sortable<T>, public my_vector<T>
{
public:
	sortable_vector() 
		{
			std::cout<<"cons"<<'\n';
		}
 	void add(const T& __x) override;
    ~sortable_vector() override {}
			
private:
	unsigned int size=0;
	T *vc = new T[size];
};

#include "sortable_vector.tcc"

#endif
