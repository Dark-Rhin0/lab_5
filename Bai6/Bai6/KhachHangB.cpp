#include "KhachHangB.h"
#include <algorithm>

void KhachHangB::Nhap(ifstream& fin) {
    KhachHang::Nhap(fin);
    fin >> soNamThanThiet;
}

double KhachHangB::TinhTien() {
    double thanhTien = soLuongHang * donGiaHang;

    double khuyenMai =
        min(soNamThanThiet * 0.05, 0.5);

    return thanhTien * (1 - khuyenMai)
        + thanhTien * 0.1;
}