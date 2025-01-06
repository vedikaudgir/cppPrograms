#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    char name[30];
    int age;

public:
    void readData()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << endl
             << "Enter age";
        cin >> age;
    }
    void printData()
    {
        cout << endl
             << "The name is - "
             << name
             << endl
             << "The age is - "
             << age;
    }

    Person()
    {
        name[0] = '\0';
        age = 0;
        cout << "\n ZERO ARGUMENT CONSTRUCTOR CALLED IN PERSON";
    }
    Person(char *n)
    {
        strcpy(name, n);
        age = 0;
        cout << "\n ONE ARGUMENT CONSTRUCTOR CALLED IN PERSON";
    }
    Person(char *n, int a)
    {
        strcpy(name, n);
        age = a;
        cout << "\n TWO ARGUMENT CONSTRUCTOR CALLED IN PERSON";
    }
    ~Person()
    {
        cout << "\n DESTRUCTOR CALLED IN PERSON";
    }
};

class Student : public Person
{
private:
    int marks;

public:
    void readData()
    {
        Person ::readData();
        cout << endl
             << "Enter marks - ";
        cin >> marks;
    }
    void printData()
    {
        Person ::printData();
        cout << endl
             << "The marks are - "
             << marks;
    }

    Student() : Person()
    {
        marks = 0;
        cout << "\n ZERO ARGUMENT CONSTRUCTOR CALLED IN STUDENT";
    }
    Student(char *n) : Person(n)
    {
        marks = 0;
        cout << "\n ONE ARGUMENT CONSTRUCTOR CALLED IN STUDENT";
    }
    Student(char *n, int a) : Person(n, a)
    {
        marks = 0;
        cout << "\n TWO ARGUMENT CONSTRUCTOR CALLED IN STUDENT";
    }
    Student(char *n, int a, int m) : Person(n,a)
    {
        marks = m;
        cout << "\n THREE ARGUMENT CONSTRUCTOR CALLED IN STUDENT";
    }
    ~Student()
    {
        cout << "\n DESTRUCTOR CALLED IN STUDENT";
    }
};

int main()
{
    Person objOfPerson;
    Student objOfStudent;

    objOfPerson.readData();
    objOfPerson.printData();

    objOfStudent.readData();
    objOfStudent.printData();
}