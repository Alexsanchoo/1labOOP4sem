#pragma once
#include<iostream>
#include<string>

using namespace std;

template<class T>
struct Status {
	T *ptr;
	int counter;
};

template<class T>
class SmartPointer {
public:
	SmartPointer(T *ptr = nullptr);
	SmartPointer(const SmartPointer &obj);
	~SmartPointer();
	SmartPointer<T>& operator=(const SmartPointer &obj);
	T* operator->() const;
	T& operator[](int index) {
		return smartPtr->ptr[index];
	}

private:
	Status<T> *smartPtr;
};

template<class T>
inline SmartPointer<T>::SmartPointer(T * ptr)
{
	if (!ptr) {
		smartPtr = nullptr;
	}
	else {
		smartPtr = new Status<T>;
		smartPtr->ptr = ptr;
		smartPtr->counter = 1;
	}
}

template<class T>
inline SmartPointer<T>::SmartPointer(const SmartPointer & obj) : smartPtr(obj.smartPtr)
{
	if (smartPtr) smartPtr->counter++;
}

template<class T>
inline SmartPointer<T>::~SmartPointer()
{
	if (smartPtr) {
		smartPtr->counter--;
		if (smartPtr->counter == 0) {
			delete[] smartPtr->ptr;
			delete smartPtr;
		}
	}
}

template<class T>
inline SmartPointer<T>& SmartPointer<T>::operator=(const SmartPointer & obj)
{
	if (smartPtr) {
		smartPtr->counter--;
		if (smartPtr->counter == 0) {
			delete[] smartPtr->ptr;
			delete smartPtr;
		}
	}
	smartPtr = obj.smartPtr;
	if(smartPtr) smartPtr->counter++;
	return *this;
}

template<class T>
inline T * SmartPointer<T>::operator->() const
{
	if (smartPtr) return smartPtr->ptr;
	else return nullptr;
}
