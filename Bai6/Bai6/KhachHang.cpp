#include "KhachHang.h"

void KhachHang::Nhap(ifstream& fin) {
    getline(fin >> ws, tenKH);
    fin >> soLuongHang;
    fin >> donGiaHang;
}

void KhachHang::Xuat(ofstream& fout) {
    fout << tenKH << endl;
    fout << TinhTien() << endl;
}