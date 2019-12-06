//using namespace std;

template<class T>
void my_vector<T>:: add(const T& __x) 
{
	_size += 1;
	T *tmp = new T[_size];
	for (int l=0;l<_size;l++)
		tmp[l] = vc[l];
	delete[] vc;
	vc= tmp;
	vc[_size-1] = __x;
}
template<class T>
void my_vector<T>::pop_back()
{
	_size -= 1;
	T *tmp= new T[_size];
	for(int l=0;l<_size;l++)
		tmp[l]=vc[l];
	delete[] vc;
	vc = tmp;
}
template<class T>
void my_vector<T>::clear()
{
	_size=0;
	T *tmp= new T[_size];
	vc = tmp;
}
template<class T>
unsigned int my_vector<T>::size() const
{
	return _size;
}

template<class T>
T* my_vector<T>::begin() const
{
	return vc;
}

template<class T>
void my_vector<T>::swap(my_container<T>&c)
{ 





}


template<class T>
const T& my_vector<T>::operator [](const unsigned int __pos) const
{
	return vc[__pos];
}





template<class T>
my_vector<T>::my_vector() {}
