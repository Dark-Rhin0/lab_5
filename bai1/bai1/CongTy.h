#ifndef CONGTY_H
#define CONGTY_H

#include <vector>

#include "NhanVien.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

class CongTy
{
private:
    vector<NhanVien*> ds;

public:
    ~CongTy();

    void NhapDS();
    void XuatDS();

    double TongLuong();

    void NVSXLuongThapNhat();
    void NVVPTuoiCaoNhat();
};

#endif