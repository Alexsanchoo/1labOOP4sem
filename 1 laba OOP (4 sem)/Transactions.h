#pragma once

template <class T2>
class Transaction {
	T2* currentState;
	T2* prevState;
public:
	Transaction() :prevState(NULL), currentState(new T2) {}
		Transaction(const Transaction & obj) : currentState(new T2(*(obj.currentState))), prevState(NULL) {}
	~Transaction() { delete currentState; delete prevState; }
		Transaction& operator=(const Transaction & obj);
		int BeginTransactions();
		int checkTransactions();
	void DeleteTransactions();
	T2* operator->();
};


template <class T2>
Transaction<T2>& Transaction<T2>::operator=(const Transaction<T2> & obj)
{
	if (this != &obj)
	{
		delete currentState;
		currentState = new T2(*(obj.currentState));
	}
	return *this;
}


template <class T2>
T2* Transaction<T2>::operator->()
{
	return currentState;
}



template <class T2>
int Transaction<T2>::BeginTransactions() {
		delete prevState; 
	prevState = currentState;
	currentState = new T2(*prevState);
		if (!currentState) return 0; 
	return 1; 
}

template<class T2>
inline int Transaction<T2>::checkTransactions()
{
	if (currentState->salary.getTax() < 0 || currentState->salary.getSalary() < 0 || currentState->salary.getBonus() < 0 || 
		currentState->salary.getNumHours() < 0)
		return 1;
	return 0;
}


template <class T2>
void Transaction<T2>::DeleteTransactions() {
	if (prevState != NULL) {
		delete currentState; 
		currentState = prevState; 
		prevState = NULL;
	}
}