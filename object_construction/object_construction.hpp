//Name: Alex Ely
//Class: CS 23001
//Created: October 21, 2021
//Project: object_construction

#ifndef OBJ_CONST_HPP
#define OBJ_CONST_HPP

class myClass {
    public:
        myClass(); //Default ctor
        myClass(const myClass&); //Copy ctor
        ~myClass(); //Destructor
        myClass operator=(const myClass&); //Assignment overload
    private:
        
};

void call_by_value(myClass);
void call_by_reference(myClass*);

#endif