#include "CongTy.h"

int main()
{
    CongTy ct;

    ct.NhapDS();

    cout << "\n========== DANH SACH NHAN VIEN ==========\n";
    ct.XuatDS();

    cout << "\nTong luong cong ty phai tra: "
        << ct.TongLuong()
        << endl;

    ct.NVSXLuongThapNhat();

    ct.NVVPTuoiCaoNhat();

    return 0;
}