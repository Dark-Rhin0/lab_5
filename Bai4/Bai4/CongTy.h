#ifndef CONGTY_H
#define CONGTY_H

#include <vector>
#include "NhanVien.h"

class CongTy {
private:
    vector<NhanVien*> ds;

public:
    ~CongTy();

    void NhapDS();
    void XuatDS();

    double LuongTB();

    void LuongDuoiTB();

    void LuongCaoNhat();

    void LuongThapNhat();

    void LTVLuongMax();

    void KCVLuongMin();
};

#endif