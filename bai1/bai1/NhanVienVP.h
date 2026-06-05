#ifndef NHANVIENVP_H
#define NHANVIENVP_H

#include "NhanVien.h"

class NhanVienVP : public NhanVien
{
private:
    int SoNgayLam;

public:
    void Nhap() override;
    void Xuat() override;
    void TinhLuong() override;
};

#endif