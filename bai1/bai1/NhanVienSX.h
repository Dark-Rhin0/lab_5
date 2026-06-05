#ifndef NHANVIENSX_H
#define NHANVIENSX_H

#include "NhanVien.h"

class NhanVienSX : public NhanVien
{
private:
    double LuongCanBan;
    int SoSanPham;

public:
    void Nhap() override;
    void Xuat() override;
    void TinhLuong() override;
};

#endif