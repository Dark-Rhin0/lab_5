#include <iostream>
#include <fstream>
#include <vector>

#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"

using namespace std;

int main() {
    ifstream fin("XYZ.INP");
    ofstream fout("XYZ.OUT");

    if (!fin) {
        cout << "Khong mo duoc file!";
        return 0;
    }

    int x, y, z;
    fin >> x >> y >> z;

    vector<KhachHang*> ds;

    for (int i = 0; i < x; i++) {
        KhachHang* p = new KhachHangA();
        p->Nhap(fin);
        ds.push_back(p);
    }

    for (int i = 0; i < y; i++) {
        KhachHang* p = new KhachHangB();
        p->Nhap(fin);
        ds.push_back(p);
    }

    for (int i = 0; i < z; i++) {
        KhachHang* p = new KhachHangC();
        p->Nhap(fin);
        ds.push_back(p);
    }

    fout << x << " " << y << " " << z << endl;

    double tong = 0;

    for (KhachHang* p : ds) {
        p->Xuat(fout);
        tong += p->TinhTien();
    }

    fout << tong << endl;

    for (KhachHang* p : ds)
        delete p;

    fin.close();
    fout.close();

    return 0;
}