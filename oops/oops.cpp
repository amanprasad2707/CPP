#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
  double salary;
  double passoword; // data hiding
public:
  string accoundId;
  string username;

  Account()
  {
    cout << "Hi, I am constructor\n";
  }
};

class Teacher
{
private:
  double salary;

public:
  // properties or attributes
  string name;
  string dept;
  string subject;

  // methods or member functions
  void changeDept(string newDept)
  {
    dept = newDept;
  }
  // setter
  void setSalary(double sal)
  {
    salary = sal;
  }
  // getter
  double getSalary()
  {
    return salary;
  }

  void getInfo()
  {
    cout << "name: " << name << endl;
    cout << "dept: " << dept << endl;
    cout << "subject: " << subject << endl;
  }

  /* Teacher()
  { // non-parameterized
    dept = "CSE";
  } */
  Teacher(string name, string dept, string subject, double salary)
  { // parameterized
    this->name = name;
    this->dept = dept;
    (*this).subject = subject;
    this->salary = salary;
  }
  /* Teacher(string n, string d, string sub, double sal){ // parameterized
    name = n;
    dept = d;
    subject = sub;
    salary = sal;
  } */

  Teacher(Teacher &obj)
  { // copy constructor pass by reference
    cout << "I am custom copy constructor\n";
    this->name = obj.name;
    this->dept = obj.dept;
    this->subject = obj.subject;
    this->salary = obj.salary;
  }

}; // here semicolon is important

class Student
{
public:
  string name;
  float *cgpaPtr;

  Student(string name, float cgpa)
  {
    this->name = name;
    cgpaPtr = new float;
    *cgpaPtr = cgpa;
  }
  /* Student(Student &obj){ // for shallow copy
    this->name = obj.name;
    this->cgpaPtr = obj.cgpaPtr;
  } */
  Student(Student &obj)
  { // for deep copy
    this->name = obj.name;
    cgpaPtr = new float;
    *cgpaPtr = *obj.cgpaPtr;
  }

  // destructure
  ~Student()
  {
    cout << "I'll delete everything for you\n";
    delete cgpaPtr; // memory leak (means many memory are allocated and leave, not pointers can points towards this memory location and this memory can't be use for any other purposes)
  }

  void getInfo()
  {
    cout << "name: " << name << endl;
    cout << "cgpa: " << *cgpaPtr << endl;
  }
};

class Person
{
public:
  string name;
  int age;

  /* Person(){
    cout << "Parent constructor\n";
  } */
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  ~Person()
  {
    cout << "parent destructure\n";
  }
};

class Student1 : public Person
{
public:
  int rollno;

  Student1(string name, int age, int rollno) : Person(name, age)
  {
    this->rollno = rollno;
    cout << "Child constructor\n";
  }
  void getInfo()
  {
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "rollno: " << rollno << endl;
  }
  ~Student1()
  {
    cout << "child destructure\n";
  }
};

class GraduateStudent : public Student1
{
public:
  string researchArea;
  GraduateStudent(string name, int age, int rollno, string researchArea)
      : Student1(name, age, rollno)
  {
    this->researchArea = researchArea;
    cout << "GraduateStudent constructor\n";
  }
  void getInfo()
  {
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "rollno: " << rollno << endl;
    cout << "research area: " << researchArea << endl;
  }
};

class Student2
{
public:
  string name;
  int rollno;
};

class Teacher1
{
public:
  string subject;
  float salary;
};

class TA : public Teacher1, public Student2
{
public:
  void getInfo()
  {
    cout << "name: " << name << endl;
    cout << "rollno: " << rollno << endl;
    cout << "salary: " << salary << endl;
    cout << "subject: " << subject << endl;
  }
};

class Print
{
public:
  void show(int x)
  {
    cout << x << endl;
  }
  void show(char x)
  {
    cout << x << endl;
  }
};

class Parent
{
public:
  void getInfo()
  {
    cout << "parent class info\n";
  }
  virtual void hello()
  {
    cout << "hello from parent\n";
  }
};

class Child : public Parent
{
public:
  void getInfo()
  {
    cout << "child class info\n";
  }
  void hello()
  {
    cout << "hello from parent\n";
  }
};

class Shape
{                          // abstract class
  virtual void draw() = 0; // pure virtual function
};
class Circle : public Shape
{
public:
  void draw()
  {
    cout << "drawing a circle\n";
  }
};


void fun() {
  static int x = 0;
  cout << "x: " << x << endl;
  x++;
}

int main()
{
  // Teacher t1("Aman", "ECE", "Computer Networks", 12343);
  // Teacher t2(t1);
  // t2.getInfo();  // default copy constructor invoke
  // t1.name = "Aman";
  // t1.dept = "Electronics and communication";
  // t1.subject = "computer networks";
  // t1.setSalary(124);
  // cout << t1.getSalary() << endl;
  // cout << t1.name << endl;
  // cout << t1.dept << endl;
  // cout << t1.subject << endl;
  // t1.changeDept("computer science");
  // cout << "after changing department\n";
  // cout << t1.dept << endl;
  // Account acc1;
  // acc1.accoundId = "2ljfae";
  // cout << acc1.accoundId << endl;

  // Student s1("Aman", 8.4);
  // Student s2(s1);
  // s1.getInfo();
  // *(s2.cgpaPtr) = 9.2;
  // s1.getInfo();
  // s2.getInfo();

  // Student1 s1("Aman", 20, 2822759);
  // s1.getInfo();

  // GraduateStudent s1("aman", 20, 203324, "IoT");
  // s1.getInfo();

  // TA ta1;
  // ta1.name = "aman";
  // ta1.rollno = 23;
  // ta1.salary = 2345;
  // ta1.subject = "Math";
  // ta1.getInfo();

  // Print p1;
  // p1.show('w');

  Circle c1;
  c1.draw();

  fun();
  fun();
  fun();
  return 0;
}