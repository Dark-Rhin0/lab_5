#ifndef GIAODICHCANHO_H
#define GIAODICHCANHO_H

#include "GiaoDich.h"

class GiaoDichCanHo : public GiaoDich {
private:
    string maCan;
    int viTriTang;
    double dienTich;

public:
    void Nhap();
    void Xuat();
    double ThanhTien();
};

#endif