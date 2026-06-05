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

        cout << "\n===== Sinh vien thu "
            << i + 1
            << " =====\n";

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

    // a,b. Xuất danh sách sinh viên
    cout << "\n===== DANH SACH SINH VIEN =====\n";

    if (dsCD.empty() && dsDH.empty()) {
        cout << "Khong co sinh vien nao.\n";
    }
    else {
        for (auto sv : dsCD)
            sv->Xuat();

        for (auto sv : dsDH)
            sv->Xuat();
    }

    // c. Danh sách đủ điều kiện tốt nghiệp
    cout << "\n===== SINH VIEN DU DIEU KIEN TOT NGHIEP =====\n";

    bool found = false;

    for (auto sv : dsCD) {
        if (sv->xetTotNghiep()) {
            sv->Xuat();
            found = true;
        }
    }

    for (auto sv : dsDH) {
        if (sv->xetTotNghiep()) {
            sv->Xuat();
            found = true;
        }
    }

    if (!found)
        cout << "Khong co sinh vien nao du dieu kien tot nghiep.\n";

    // d. Danh sách không đủ điều kiện tốt nghiệp
    cout << "\n===== SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP =====\n";

    found = false;

    for (auto sv : dsCD) {
        if (!sv->xetTotNghiep()) {
            sv->Xuat();
            found = true;
        }
    }

    for (auto sv : dsDH) {
        if (!sv->xetTotNghiep()) {
            sv->Xuat();
            found = true;
        }
    }

    if (!found)
        cout << "Khong co sinh vien nao khong du dieu kien tot nghiep.\n";

    // e. Sinh viên cao đẳng có điểm TB cao nhất
    SVCaoDang* maxCD = nullptr;

    for (auto sv : dsCD) {
        if (!maxCD || sv->getDiemTB() > maxCD->getDiemTB())
            maxCD = sv;
    }

    cout << "\n===== SINH VIEN CAO DANG CO DTB CAO NHAT =====\n";

    if (maxCD)
        maxCD->Xuat();
    else
        cout << "Khong co sinh vien Cao Dang.\n";

    // f. Sinh viên đại học có điểm TB cao nhất
    SVDaiHoc* maxDH = nullptr;

    for (auto sv : dsDH) {
        if (!maxDH || sv->getDiemTB() > maxDH->getDiemTB())
            maxDH = sv;
    }

    cout << "\n===== SINH VIEN DAI HOC CO DTB CAO NHAT =====\n";

    if (maxDH)
        maxDH->Xuat();
    else
        cout << "Khong co sinh vien Dai Hoc.\n";

    // g. Đếm số sinh viên không đủ điều kiện tốt nghiệp
    int countCD = 0;
    int countDH = 0;

    for (auto sv : dsCD) {
        if (!sv->xetTotNghiep())
            countCD++;
    }

    for (auto sv : dsDH) {
        if (!sv->xetTotNghiep())
            countDH++;
    }

    cout << "\n===== THONG KE =====\n";
    cout << "So SV Cao Dang khong du dieu kien tot nghiep: "
        << countCD << endl;

    cout << "So SV Dai Hoc khong du dieu kien tot nghiep: "
        << countDH << endl;

    // Giải phóng bộ nhớ
    for (auto sv : dsCD)
        delete sv;

    for (auto sv : dsDH)
        delete sv;

    return 0;
}