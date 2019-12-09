template<class T>
void sortable_vector<T>:: add(const T& __x)

{
	my_vector<T>::add(__x);
	sortable<T>::sort(my_vector<T>::begin(), my_vector<T>::end());

}
