#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class SinhVien {
protected:
    string maSV;
    string hoTen;
    string diaChi;
    int tongTinChi;
    double diemTB;

public:
    virtual void Nhap();
    virtual void Xuat();

    virtual bool xetTotNghiep() = 0;

    double getDiemTB();
    string getHoTen();

    virtual ~SinhVien();
};

#endif