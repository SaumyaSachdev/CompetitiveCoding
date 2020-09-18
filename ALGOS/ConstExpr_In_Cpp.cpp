// Use of constexpr for conditional compilation of templates
// Author: Pranjal Kaler

// =========== WILL ONLY WORK IN C++17 OR HIGHER ===========


#include <iostream>

class A {
    public:
    void print() {
	    std :: cout << "A" << std :: endl;
    }
};

 

class B {
    public:
};

 

template<typename T>
void function(T t) {
    if constexpr(std :: is_same<T, A> :: value)
    {
        t.print();
    }
    else {
	    std :: cout << "B" << std :: endl;
    }
}

 

int main() {
    A a;
    B b;
    function<A>(a);
    function<B>(b);
    return 0;
}
 
