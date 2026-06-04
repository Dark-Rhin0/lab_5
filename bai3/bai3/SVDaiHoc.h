#ifndef SVDAIHOC_H
#define SVDAIHOC_H

#include "SinhVien.h"

class SVDaiHoc : public SinhVien {
private:
    string tenLuanVan;
    double diemLuanVan;

public:
    void Nhap() override;
    void Xuat() override;
    bool xetTotNghiep() override;
};

#endif