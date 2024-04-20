
#include <iostream>
#include <string>


using namespace std;

class Student {
    int age;
    string name;

public:
    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }
};

class Person {
private:
    int age;
    long long int number;

public:
    int getAge() {
        return age;
    }
    long long int getNumber() {
        return number;
    }

    void setAge(int age);
    void setNumber(long long int number);
 
};

void Person::setAge(int age) {
    this->age = age;
}

void Person::setNumber(long long int number) {
    this->number = number;
}

int main()
{
    cout << "Hello World!\n";

    Student std;
    std.setAge(19);
    std.setName("Kiran");

    cout << std.getAge() << endl;
    cout << std.getName() << endl;


    Person p1;
    p1.setAge(19);
    p1.setNumber(8309624849);


    cout << p1.getAge() << endl;
    cout << p1.getNumber() << endl;

}