#ifndef GIAODICH_H
#define GIAODICH_H

#include <iostream>
#include <string>
using namespace std;

class GiaoDich {
protected:
    string maGD;
    string ngayGD;
    double donGia;

public:
    virtual ~GiaoDich() {}

    virtual void Nhap();
    virtual void Xuat();
    virtual double ThanhTien() = 0;

    string getNgayGD() {
        return ngayGD;
    }
};

#endif