/*************************************************************************
	> File Name: RTS.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 16 Nov 2020 01:11:22 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// 用于保存兵种自身的信息
class troop{
private:
    string name;    // 单位名称
    int HP;         // 单位血量（所需水晶）
    int num;        // 单位编号
    int SCV_num;    // scv数量
    int Marine_num; // marine数量
    int Medic_num;  // medic数量
public:
    troop():num(0), SCV_num(1), Marine_num(1), Medic_num(1){}
    void SCV() {
        name = "SCV";
        HP = 10;
        cout << name << " " << num << " born with HP " << HP << " " << SCV_num << " " << name << " ";
        num++;
        SCV_num++;
    }
    void Marine() {
        name = "Marine";
        HP = 5;
        cout << name << " " << num << " born with HP " << HP << " " << Marine_num << " " << name << " ";
        num++;
        Marine_num++;
    }
    void Medic() {
        name = "Medic";
        HP = 4;
        cout << name << " " << num << " born with HP " << HP << " " << Medic_num << " " << name << " ";
        num++;
        Medic_num++;
    }
    int get_HP() {
        return HP;
    }

};

// 用于保存基地应该保存的信息
class base{
private:
    int r_time;
    int m_time;
public:
    base():r_time(0), m_time(0){}
    void Raynor_begin() {
        cout << "Time: " << r_time << "  Raynor ";
        r_time++;
    }
    void Raynor_end() {
        cout << "in base Raynor" << endl;
    }
    void Mengsk_begin() {
        cout << "Time: " << m_time << "  Mengsk ";
        m_time++;
    }
    void Mengsk_end() {
        cout << "in base Mengsk" << endl;
    }
    void Rstop() {
        cout << "Time: " << --r_time << "  Raynor base stop training troopers." << endl;
    }
    void Mstop() {
        cout << "Time: " << --m_time << "  Mengsk base stop training troopers." << endl;
    }
};

int main() {
    int crystal;
    cin >> crystal;
    int rc = crystal;
    int mc = crystal;
    troop rt;   // 雷诺的兵
    troop mt;   // 蒙斯克的兵
    base rb;    // 雷诺的基地
    base mb;    // 蒙斯克的基地
    // 雷诺的制造顺序
    while(rc >= 4) {
        if (rc >= 10) {
            rb.Raynor_begin();
            rt.SCV();
            rb.Raynor_end();
            rc = rc - rt.get_HP();
        }
        if (rc >= 5) {
            rb.Raynor_begin();
            rt.Marine();
            rb.Raynor_end();
            rc = rc - rt.get_HP();
        }
        if (rc >= 4) {
            rb.Raynor_begin();
            rt.Medic();
            rb.Raynor_end();
            rc = rc - rt.get_HP();
        }
    }
    rb.Rstop();
    // 蒙斯克的制造顺序
    while(mc >= 4) {
        if (mc >= 5) {
            mb.Mengsk_begin();
            mt.Marine();
            mb.Mengsk_end();
            mc = mc - mt.get_HP();
        }
        if (mc >= 4) {
            mb.Mengsk_begin();
            mt.Medic();
            mb.Mengsk_end();
            mc = mc - mt.get_HP();
        }
        if (mc >= 10) {
            mb.Mengsk_begin();
            mt.SCV();
            mb.Mengsk_end();
            mc = mc - mt.get_HP();
        }
    }
    mb.Mstop();
}
