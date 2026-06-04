#include "SVDaiHoc.h"

void SVDaiHoc::Nhap() {
    SinhVien::Nhap();

    cin.ignore();

    cout << "Ten luan van: ";
    getline(cin, tenLuanVan);

    cout << "Diem luan van: ";
    cin >> diemLuanVan;
}

bool SVDaiHoc::xetTotNghiep() {
    return tongTinChi >= 170
        && diemTB >= 5
        && diemLuanVan >= 5;
}

void SVDaiHoc::Xuat() {
    SinhVien::Xuat();

    cout << " | He DH"
        << " | Tot nghiep: "
        << (xetTotNghiep() ? "Dat" : "Khong")
        << endl;
}