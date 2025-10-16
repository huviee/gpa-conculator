#include <iostream>
using namespace std;

float lamTron2ChuSo(float x) {
    return int(x * 100 + 0.5) / 100.0;
}


float chuyenDiem4(float diem10) {
    if (diem10 >= 8.5) return 4.0;
    else if (diem10 >= 8.0) return 3.7;
    else if (diem10 >= 7.0) return 3.0;
    else if (diem10 >= 6.5) return 2.5;
    else if (diem10 >= 5.5) return 2.0;
    else if (diem10 >= 5.0) return 1.5;
    else if (diem10 >= 4.0) return 1.0;
    else return 0.0;
}

int main() {
    
    int soMon;
    float diem, tongDiem10 = 0, tongDiem4 = 0;
    int tinChi, tongTinChi = 0;

    cout << "===== CHUONG TRINH TINH GPA =====" << endl;
    cout << "Nhap so mon hoc: ";
    cin >> soMon;
    if (soMon<=0)
    {
        cout<< " phai nhap so mon lon hon 0";
        return 0;
    }
    {
        /* code */
    }
    

    for (int i = 1; i <= soMon; ++i) {
        cout << "\nMon hoc thu " << i << ":" << endl;

        do {
            cout << "  Nhap diem (0 - 10): ";
            cin >> diem;
            if (diem < 0 || diem > 10)
                cout << "  Loi: Diem phai trong khoang 0 - 10!\n";
        } while (diem < 0 || diem > 10);

        do {
            cout << "  Nhap so tin chi (> 0): ";
            cin >> tinChi;
            if (tinChi <= 0)
                cout << "  Loi: Tin chi phai lon hon 0!\n";
        } while (tinChi <= 0);

        tongDiem10 += diem * tinChi;
        tongDiem4 += chuyenDiem4(diem) * tinChi;
        tongTinChi += tinChi;
    }

    float GPA10 = tongDiem10 / tongTinChi;
    float GPA4 = tongDiem4 / tongTinChi;

    cout << "\n===============================" << endl;
    cout << "Tong tin chi: " << tongTinChi << endl;
    cout << "GPA (thang 10): " << lamTron2ChuSo(GPA10) << endl;
    cout << "GPA (thang 4):  " << lamTron2ChuSo(GPA4) << endl;
    cout << "===============================\n";
    return 0;
}
