#include "KhachHangA.h"

double KhachHangA::TinhTien() {
    double thanhTien = soLuongHang * donGiaHang;
    return thanhTien + thanhTien * 0.1;
}