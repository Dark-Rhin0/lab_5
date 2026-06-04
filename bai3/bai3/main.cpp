#include <vector>

#include "SVCaoDang.h"
#include "SVDaiHoc.h"

using namespace std;

int main() {
    vector<SVCaoDang*> dsCD;
    vector<SVDaiHoc*> dsDH;

    int n;

    cout << "Nhap so luong SV: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int loai;

        cout << "\nSinh vien thu "
            << i + 1 << endl;

        cout << "He (1: CD, 2: DH): ";
        cin >> loai;

        if (loai == 1) {
            SVCaoDang* sv = new SVCaoDang();
            sv->Nhap();
            dsCD.push_back(sv);
        }
        else {
            SVDaiHoc* sv = new SVDaiHoc();
            sv->Nhap();
            dsDH.push_back(sv);
        }
    }

    cout << "\n===== DANH SACH SINH VIEN =====\n";

    for (auto sv : dsCD)
        sv->Xuat();

    for (auto sv : dsDH)
        sv->Xuat();

    cout << "\n===== SINH VIEN DU DIEU KIEN TOT NGHIEP =====\n";

    for (auto sv : dsCD)
        if (sv->xetTotNghiep())
            sv->Xuat();

    for (auto sv : dsDH)
        if (sv->xetTotNghiep())
            sv->Xuat();

    cout << "\n===== SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP =====\n";

    for (auto sv : dsCD)
        if (!sv->xetTotNghiep())
            sv->Xuat();

    for (auto sv : dsDH)
        if (!sv->xetTotNghiep())
            sv->Xuat();

    SVCaoDang* maxCD = nullptr;

    for (auto sv : dsCD)
        if (!maxCD || sv->getDiemTB() > maxCD->getDiemTB())
            maxCD = sv;

    if (maxCD)
        cout << "\nSV Cao Dang diem TB cao nhat: "
        << maxCD->getHoTen()
        << endl;

    SVDaiHoc* maxDH = nullptr;

    for (auto sv : dsDH)
        if (!maxDH || sv->getDiemTB() > maxDH->getDiemTB())
            maxDH = sv;

    if (maxDH)
        cout << "SV Dai Hoc diem TB cao nhat: "
        << maxDH->getHoTen()
        << endl;

    int countCD = 0;
    int countDH = 0;

    for (auto sv : dsCD)
        if (!sv->xetTotNghiep())
            countCD++;

    for (auto sv : dsDH)
        if (!sv->xetTotNghiep())
            countDH++;

    cout << "\nSo SV Cao Dang khong dat: "
        << countCD << endl;

    cout << "So SV Dai Hoc khong dat: "
        << countDH << endl;

    for (auto sv : dsCD)
        delete sv;

    for (auto sv : dsDH)
        delete sv;

    return 0;
}