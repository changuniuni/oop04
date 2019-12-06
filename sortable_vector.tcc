template<class T>
void sortable_vector<T>::add(const T& __x)
{
	size+=1;
	std::cout<<"size:"<<size<<'\n';
	T *tmp = new T[size];
	for (int l=0;l<size;l++)
		tmp[l] = vc[l];
	delete []vc;
	vc = tmp;
	vc[size-1] = __x;
	sortable<T>::sort(vc, vc+size);
	std::cout<<"first :"<<vc[0]<<'\n';
	std::cout<<vc[size-1]<<'\n';
}
