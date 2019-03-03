#ifndef __STACK_H__
#define __STACK_H__
#include <vector>
using namespace std;
template <typename T> class Stack: public vector<T> {

public:
    void push(T const& e)
    {
        insert(this->size(), e);
    }

    T pop()
    {
        return remove(vector<T>::size()-1);
    }
    
    T& top()
    {
        return (*this)[this-> size()-1];
    }

};
#endif
