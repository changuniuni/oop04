#include "my_container.hpp"
#include<vector>
#ifndef MY_VECTOR_HPP
#define MY_VECTOR_HPP

template<class T>
class my_vector : public my_container<T>
{
public:
    // default constructor
    my_vector() ;



	my_vector(my_vector &a ) 
	{
		_size = a._size;
		for(int i=0;i<_size;i++)
		{
			vc[i] = a.vc[i];
		}

	}


	void add(const T& __x) override;
	void pop_back() override ;
	void clear() override ;
	void swap(my_container<T>& c) override;
	unsigned int size() const override ;
	const T& operator [](const unsigned int __pos) const override ;


	T* begin() const override ;
	T* end() const;
	~my_vector() override {
	for(int i=0;i<_size;i++)
		std::cout<<vc[i]<<'\n';
	
	}
		unsigned int _size=0;
		T *vc= new T[_size];


};

#include "my_vector.tcc"

#endif

