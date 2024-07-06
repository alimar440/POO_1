#include <iostream>

class MyClass {
public:
    int data;

    MyClass(int value = 0) : data(value) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    MyClass(const MyClass& other) : data(other.data) {
        std::cout << "Copy constructor called with value: " << other.data << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called with value: " << data << std::endl;
    }
};

MyClass createObject(int value) {
    MyClass obj(value);
    return obj; // Retourne l'objet par valeur
}

int main() {
    MyClass obj1 = createObject(10);

    std::cout << "obj1.data: " << obj1.data << std::endl;

    return 0;
}
