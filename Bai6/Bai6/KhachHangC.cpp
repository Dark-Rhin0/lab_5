#include "KhachHangC.h"

double KhachHangC::TinhTien() {
    double thanhTien = soLuongHang * donGiaHang;

    return thanhTien * 0.5
        + thanhTien * 0.1;
}