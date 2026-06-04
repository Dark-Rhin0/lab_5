#ifndef GIAODICHDAT_H
#define GIAODICHDAT_H

#include "GiaoDich.h"

class GiaoDichDat : public GiaoDich {
private:
    char loaiDat;
    double dienTich;

public:
    void Nhap();
    void Xuat();
    double ThanhTien();
};

#endif