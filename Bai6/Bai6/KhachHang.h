#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class KhachHang {
protected:
    string tenKH;
    int soLuongHang;
    double donGiaHang;

public:
    virtual ~KhachHang() {}

    virtual void Nhap(ifstream& fin);
    virtual double TinhTien() = 0;
    virtual void Xuat(ofstream& fout);
};

#endif