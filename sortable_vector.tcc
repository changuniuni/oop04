template<class T>
void add(const T& __x)
{
	T* str = &my_vector<T>::vc;
	int size = my_vector<T>::_size;
	my_vector<T>::add( &__x);
	sortable<T>::sort(str,str+size);
}
