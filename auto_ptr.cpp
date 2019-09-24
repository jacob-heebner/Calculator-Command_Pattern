#include "auto_ptr.h"
/*
CURRENTLY NOT USED
*/
template <typename T>
auto_ptr<T>::auto_ptr(void) 
	: ptr_(0) 
{

}

template <typename T>
auto_ptr<T>::auto_ptr(T * ptr)
	: ptr_(ptr)
{

}

template <typename T>
auto_ptr<T>::~auto_ptr(void) {
	if (0 != this->ptr_) {
		delete this->ptr_;
	}
}

template <typename T>
T * auto_ptr<T>::operator ->(void) {
	return this->ptr_;
}

template <typename T>
T & auto_ptr<T>::operator * (void) {
	return *this->ptr_;
}

template <typename T>
operator T * (void) {
	return this->ptr_;
}