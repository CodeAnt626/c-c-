/*************************************************************************
	> File Name: dyn_alloc.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 21 Nov 2020 08:57:36 PM CST
 ************************************************************************/

// 练习使用动态内存分配的代码

#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(int newX=0,int newY=0){
        cout << "calling constructor" << endl;
        x=newX;
        y=newY;
    }
    Point(Point &p){
        x=p.x;
        y=p.y;
    }
    ~Point(){
        cout << "calling destructor " << endl;
    }
    void move(int x,int y){
        this->x+=x;
        this->y+=y;
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
class PointsArray{
public:
    PointsArray(int size):size(size){
		array = new Point[size];
    }
    Point &getElement(int index){
        if(index>=0&&index<size){
            return array[index];
        }
        else{
            cout << "invalid index!" << endl;
        }
    }
    ~PointsArray(){
		delete[] array;
    }
private:
    Point * array;
    int size;
};
int main(){
    Point *p = new Point(1, 2);
	delete p;
    int n;
    cin >> n;
    PointsArray pa(n);
    cout << pa.getElement(0).getX() << " " << pa.getElement(0).getY() << endl;
    pa.getElement(1).move(1, 1);
    cout << pa.getElement(1).getX() << " " << pa.getElement(1).getY() << endl;
    return 0;
}
