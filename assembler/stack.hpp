#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    Fall 2021
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include "../string/string.hpp"
#include <cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class node {
public:
	node() : next(0) {};
	node(const T& x) : next(0), data(x) {};
	node<T> *next;
	T data;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV: tos -> x1 -> x2 -> ... -> xN -> 0
//
//    
template <typename T>
class stack {
public:
              stack     () : tos(0) {};
              stack     (const stack&);
              ~stack    ();
    void      swap      (stack&);
    stack&    operator= (stack rhs) { swap(rhs); return *this;};
	bool      empty     () const { return tos == 0; };
	bool      full      () const;
	T         top       () const { assert(!empty()); return tos->data; };
	T         pop       ();
	void      push      (const T&);

private:
	node<T>   *tos;
};

//REQUIRES: Passed stack by reference.
//ENSURES: Used to stack is copy of passed stack
template <typename T>
stack<T>::stack(const stack<T> &real) : stack<T>() {
    node<T> *temp = real.tos;
    node<T> *bottom;

    while(temp != 0) {
        if(tos == 0) {
            tos = new node<T>(temp->data);
            bottom = tos;
        } 
        else {
            bottom->next = new node<T>(temp->data);
            bottom = bottom->next;
        }
        temp = temp->next;
    }
}

//REQUIRES: Call for stack deletion
//ENSURES: Memory for stack unassigned
template <typename T>
stack<T>::~stack() {
        node<T> *temp;
        while(tos != 0) {
            temp = tos;
            tos = tos->next;
            delete temp;
    }
}

//REQUIRES: Stack passed by reference
//ENSURES: Stack and passed stack are swapped
template <typename T>
void stack<T>::swap(stack &rhs) {
    node<T> *temp = tos;
    tos = rhs.tos;
    rhs.tos = temp;
}

//REQUIRES: Called by stack
//ENSURES: Returned boolean true if stack full and false if stack not full
template <typename T>
bool stack<T>::full() const {
    node<T> *temp = new(std::nothrow) node<T>();
    if(temp == 0)
        return true;
    delete temp;
    return false;

}

//REQUIRES: Called by stack && stack not empty
//ENSURES: Return data of assigned data type
template <typename T>
T stack<T>::pop() {
    assert(!empty());
    T result = tos->data;
    node<T> *temp;
    temp = tos;
    tos = tos->next;
    delete temp;
    return result;
}

//REQUIRES: Called by stack && stack not full
//ENSURES: New node of pushed data in stack
template <typename T>
void stack<T>::push(const T& item) {
    assert(!full());
    node<T> *temp = new node<T>(item);
    temp->next = tos;
    tos = temp;
}

#endif

