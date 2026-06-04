#ifndef SVCAODANG_H
#define SVCAODANG_H

#include "SinhVien.h"

class SVCaoDang : public SinhVien {
private:
    double diemThiTotNghiep;

public:
    void Nhap() override;
    void Xuat() override;
    bool xetTotNghiep() override;
};

#endif