#include <iostream>
using namespace std;

template <typename T>
class MyBox {
    T value;
public:
    void setValue(T v) {
        value = v;
    }
    T getValue() {
        return value;
    }
};

int main() {
    MyBox<int> intBox;
    intBox.setValue(100);
    cout << intBox.getValue() << endl;

    MyBox<string> strBox;
    strBox.setValue("Gojo Satoru supremacy 💙");
    cout << strBox.getValue() << endl;
}
