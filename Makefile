CXX = g++
LIB = -lgtest_main -lgtest

test: Test.cpp my_container.hpp my_vector.hpp my_vector.tcc sortable_vector.tcc sortable_vector.hpp sortable.hpp
	$(CXX) -o test Test.cpp $(LIB) && \
	./test

clean:
	rm -f test *.o
