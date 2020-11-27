/*************************************************************************
	> File Name: sort.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 27 Nov 2020 05:02:06 PM CST
 ************************************************************************/

// 自定义类的排序， 考试成绩排序

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class student {
public:
    student(string input_name, int input_score): name(input_name), score(input_score) {

    }
    void print() {
        cout << name << " " << score << endl;
    }
    string get_name() {
        return name;
    }
    int get_score() {
        return score;
    }

private:
    int score;
    string name;
};

bool cmp(student a, student b);

int main() {
    int input;
    string name;
    vector<student> stu;
    while(cin>>name>>input) {
        student temp(name, input);
        stu.push_back(temp);
    }
    sort(stu.begin(), stu.end(), cmp);
    for (int i = 0; i < stu.size(); i++) {
        stu[i].print();
    }
    cout << stu.size() << endl;

    return 0;
}

bool cmp(student a, student b) {
    if (a.get_score() != b.get_score()) {
        return a.get_score() < b.get_score();   // 升序
        // return a.get_score() > b.get_score();    // 降序
    } else {
        return (a.get_name() < b.get_name());   // 升序
        // return (a.get_name() > b.get_name()); // 降序
    }
}
