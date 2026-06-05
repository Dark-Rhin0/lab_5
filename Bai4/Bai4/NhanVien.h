#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>

using namespace std;

class NhanVien {
protected:
    string maNV;
    string hoTen;
    int tuoi;
    string sdt;
    string email;
    double luongCoBan;

public:
    virtual ~NhanVien() {}

    virtual void Nhap();
    virtual void Xuat();
    virtual void XuatThongTin();

    virtual double TinhLuong() = 0;
};

#endif