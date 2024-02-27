#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
    char gender;
public:
    Person(const string& n, int a, char g) : name(n), age(a), gender(g) {}
    void setName(const string& n) {
        name=n;
    }
    void setAge(int a) {
        age=a;
    }
    void setGender(char g) {
        gender=g;
    }
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    char getGender()const {
        return gender;
    }
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter gender (M/F): ";
        cin>>gender;
    }
};
class Student:public Person {
private:
    int rollNumber;
    string className;
public:
    Student(const string&n,int a,char g,int roll,const string&className)
        : Person(n,a,g),rollNumber(roll),className(className){}
    void setRollNumber(int roll) {
        rollNumber=roll;
    }
    void setClassName(const string& className) {
        this->className=className;
    }
    int getRollNumber()const {
        return rollNumber;
    }
    string getClassName()const {
        return className;
    }
    void input(){
        Person::input();
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        cout<<"Enter class name: ";
        cin>>className;
    }
};
class Teacher:public Person {
private:
    string subject;
    double salary;
public:
    Teacher(const string& n, int a, char g, const string& subj, double sal)
        : Person(n, a, g), subject(subj), salary(sal) {}
    void setSubject(const string& subj) {
        subject=subj;
    }
    void setSalary(double sal) {
        salary=sal;
    }
    string getSubject() const {
        return subject;
    }
    double getSalary() const {
        return salary;
    }
    void input() {
        Person::input();
        cout<<"Enter subject: ";
        cin>>subject;
        cout<<"Enter salary: ";
        cin>>salary;
    }
};
int main() {
    Student student("",0,' ',0,"");
    Teacher teacher("",0,' ',"",0.0);
    cout<<"Enter student information:\n";
    student.input();
    cout<<"\nEnter teacher information:\n";
    teacher.input();
    cout<<"\nStudent: "<<student.getName()<<", Age: "<<student.getAge()<<", Gender: "<<student.getGender()<<", Roll Number: "<<student.getRollNumber()<<", Class: "<<student.getClassName()<<endl;
    cout<<"Teacher: "<<teacher.getName()<<", Age: "<<teacher.getAge()<<", Gender: "<<teacher.getGender()<<", Subject: "<<teacher.getSubject()<<", Salary: "<<teacher.getSalary()<<endl;
    return 0;
}

