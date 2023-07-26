#include <iostream>
#include "Pair.h"

int Pair::sum() {
    return a + b;
}

void Pair::setValueofa(int val) {
    a = val;
}

void Pair::setValueofb(int val) {
    b = val;
}

int Pair::getValueofa() {
    return a;
}

int Pair::getValueofb() {
    return b;
}

int main() {
    Pair p;
    p.setValueofa(100);
    p.setValueofb(200);
    if (p.getValueofa() + p.getValueofb() == p.sum()) {
        std::cout << " Success!" << std::endl;
    }
    else {
        std::cout << "p.sum() error" << std::endl;
    }
    return 0;

}