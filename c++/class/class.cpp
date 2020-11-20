/*************************************************************************
	> File Name: class.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 16 Nov 2020 09:42:44 AM CST
 ************************************************************************/

// 有关类的学习

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
class Point{
public:
    Point(int newX = 0,int newY = 0){
      x = newX;
      y = newY;
    }
    Point(Point &p){
      x = p.x;
      y = p.y;
    }
    int getX() {
          return x;
    }
    int getY() {
          return y;    
    }
private:
    int x,y;
};
class Line{
public:
    Line(Point new_p1, Point new_p2):p1(new_p1),p2(new_p2){
        double x = static_cast<double>(p1.getX() - p2.getX());
        double y = static_cast<double>(p1.getY() - p2.getY());
        len = sqrt(x * x + y * y);
    }
    Line(Line &l):p1(l.p1),p2(l.p2) {
        len = l.len;
    }
    double getLen() {
        return len;
    }
private:
    Point p1, p2;
    double len;
};
int main(){
    Point pa(1, 2);
    Point pb(3, 5);
    Line L1(pa, pb);
    Line L2(L1);
    cout << "The length of L1 is " << L1.getLen() << endl;
    cout << "The length of L2 is " << L2.getLen() << endl;
    return 0;
}
