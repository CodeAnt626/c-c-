/*************************************************************************
	> File Name: class_02.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 16 Nov 2020 01:02:00 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
class People {
private:
    int number;     //编号
    string name;    //姓名
    string gender;  //性别
    string ID;      //身份证号
    double salary;  //工资
public:
    People(int num,string na,string g,string id,double s):number(num),name(na),gender(g),ID(id),salary(s){
        cout << "calling the constructor" << endl;
    }
    People(People &p):name(p.name),gender(p.gender),ID(p.ID),salary(p.salary){
        number = p.number + 1;
        cout << "calling the copy constructor" << endl;
    }
    ~People(){
        cout << "calling the destructor" << endl;
    }
    void set_name(string n) {
        name = n;
    }
    void set_salary(double s) {
        salary = s;
    }
    void show() {
        cout << number << " " << name << " " << gender << " " << ID << " " << salary << endl;
    }
};
int main() {
    People p1(01, "qratosone", "Male", "2010201326", 4800.0);
    People p2(p1);
    p2.set_name("He");
    p2.set_salary(301.301);
    p1.show();
    p2.show();
    string new_name;
    cin>>new_name;
    People p3(p2);
    p3.set_name(new_name);
    p3.show();
    return 0;
}
