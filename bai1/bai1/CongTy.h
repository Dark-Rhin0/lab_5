#ifndef CONGTY_H
#define CONGTY_H

#include <vector>

#include "NhanVien.h"
#include "NhanVienSX.h"
#include "NhanVienVP.h"

class CongTy
{
private:
    vector<NhanVien*> DS;

public:
    ~CongTy();

    void NhapDanhSach();
    void XuatDanhSach();

    double TongLuong();

    void NVSXLuongThapNhat();
    void NVVPLonTuoiNhat();
};

#endif