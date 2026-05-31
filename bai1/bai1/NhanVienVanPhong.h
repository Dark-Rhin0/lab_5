#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H

#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
private:
    int soNgayLam;

public:
    void Nhap() override;
    void Xuat() override;
    void TinhLuong() override;
};

#endif