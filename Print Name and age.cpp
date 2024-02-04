#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

private:
    string name;
    int age;

public:
    void setValue(string s, int age) {
        this->name = s;
        this->age = age;
    }

    void getValue() {
        cout << "The name of the person is " << this->name
            << " and the age is " << this->age << '.' << endl;
    }

};

int main() {
    string str;
    int age;
    cin >> str >> age;

    Person a;
    a.setValue(str, age);
    a.getValue();

    return 0;
}
