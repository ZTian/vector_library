#ifndef VECTOR_LIBRARY_H
#define VECTOR_LIBRARY_H

namespace vector_library {

template <class T>
class VectorLibrary {
public:
	iterator begin();
	iterator end();
private:
	int size_ = 0;
	T[] data_;
}

} // namespace vector_library

#endif // !VECTOR_LIBRARY_H
