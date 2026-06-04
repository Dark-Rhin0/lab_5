#include "CongTy.h"

int main() {
    CongTy ct;

    ct.NhapDS();

    cout << "\n===== DANH SACH NHAN VIEN =====\n";
    ct.XuatDS();

    cout << "\n===== LUONG DUOI TRUNG BINH =====\n";
    ct.LuongDuoiTB();

    cout << "\n===== LUONG CAO NHAT =====\n";
    ct.LuongCaoNhat();

    cout << "\n===== LUONG THAP NHAT =====\n";
    ct.LuongThapNhat();

    cout << "\n===== LTV LUONG CAO NHAT =====\n";
    ct.LTVLuongMax();

    cout << "\n===== KCV LUONG THAP NHAT =====\n";
    ct.KCVLuongMin();

    return 0;
}