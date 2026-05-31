#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();

    cout << "Luong can ban: ";
    cin >> luongCanBan;

    cout << "So san pham: ";
    cin >> soSanPham;
}

void NhanVienSanXuat::TinhLuong()
{
    luong = luongCanBan + soSanPham * 5000;
}

void NhanVienSanXuat::Xuat()
{
    cout << "\n=== NHAN VIEN SAN XUAT ===\n";

    NhanVien::Xuat();

    cout << "Luong can ban: " << luongCanBan << endl;
    cout << "So san pham: " << soSanPham << endl;
}