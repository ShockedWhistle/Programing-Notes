#include <iostream>
#include <stdlib.h>

using namespace std;

class Entity{
    public:
        void print() const { cout << "Hello!" << endl;}
};

class ScopedPtr{
    private:
        Entity* m_Ojb;
    public:
        ScopedPtr(Entity* entity)
            : m_Ojb(entity)
        {}

        ~ScopedPtr(){
            delete m_Ojb;
        }

    Entity* operator->(){
        return m_Ojb;
    }
};

int main(){

    Entity e;
    e.print();

    Entity* ptr = &e;
    (*ptr).print(); // This dereferences the pointer and then uses the print function of the entity associated with the pointer

    ptr -> print(); // This is the same as before but the -> is just a short hand to dereference only the pointer like before

    ScopedPtr entity = new Entity();
    entity -> print();

    return 0;
}