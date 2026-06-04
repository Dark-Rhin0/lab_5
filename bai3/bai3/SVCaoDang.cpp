#include "SVCaoDang.h"

void SVCaoDang::Nhap() {
    SinhVien::Nhap();

    cout << "Diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
}

bool SVCaoDang::xetTotNghiep() {
    return tongTinChi >= 120
        && diemTB >= 5
        && diemThiTotNghiep >= 5;
}

void SVCaoDang::Xuat() {
    SinhVien::Xuat();

    cout << " | He CD"
        << " | Tot nghiep: "
        << (xetTotNghiep() ? "Dat" : "Khong")
        << endl;
}