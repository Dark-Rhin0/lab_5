#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
protected:
    string HoTen;
    int NamSinh;
    double Luong;

public:
    NhanVien();
    virtual ~NhanVien();

    virtual void Nhap();
    virtual void Xuat();

    virtual void TinhLuong() = 0;

    double GetLuong() const;
    int GetNamSinh() const;
    string GetHoTen() const;
};

#endif