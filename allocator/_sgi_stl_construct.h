#pragma once 

#include <new>

template <class T1, class T2>
inline void construct(T1* p, const T2& value) {
    new (p) T1(value);
}

template <class T>
inline void destroy(T* pointer) {
    pointer->~T();
}

template <class ForwardIterator> 
inline void destroy(ForwardIterator first, ForwardIterator last) {

}

template <class ForwardIterator, class T>
inline void __destroy(ForwardIterator first, ForwardIterator last, T*) {
    typedef typename __type_traits<T>::has_
}