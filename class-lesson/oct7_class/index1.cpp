#include<iostream>
using namespace std;

class Student{
   public: 
   string name;
   int age;
   void display()
   {
       cout << "Student name: " << name << " | age: " << age << endl;
   }
};
int main (){
    Student s1;
    s1.name = "Jonh";
    s1.age = 22;
    s1.display();

    Student s2;
    s2.name = "Sam";
    s2.age = 25;
    s2.display();
    return 0;
}

