#include <stdio.h>
#include <conio.h>
/*
typedef struct  {
        char MaSV[10];
        char Hoten[10];
        int Tuoi;
} Sinhvien;

void main() {
    Sinhvien sv1;
    Sinhvien *ptr_sv;
    ptr_sv = &sv1;
    printf("Ho ten sinh vien: ");
//    gets(sv1.Hoten);
    gets(ptr_sv->Hoten);
    // ham gets dung de nhap nhung du lieu co dau cach
    //scanf chỉ để nhập những chuỗi liền nhau

    printf("Tuoi sinh vien: ");
    scanf("%d", ptr_sv ->Tuoi);

    printf("Sinh vien: %s, Tuoi: %d", ptr_sv->Hoten, ptr_sv->Tuoi);
}

*/

    struct Hoten {
        char hodem[30]; //why
        char ten[10];  //why
    } ;

    struct Sinhvien{
        struct Hoten HovaTen;
        char MaSV[10];
        float DiemKT, DiemT, DiemTK;
        float DiemCC;
    };

void indssv (struct Sinhvien sv[10], int n) {
    printf("\n|STT|          HO DEM           |   TEN   | CC | KT | TK |");
    for (int i = 0; i < n; i++) {
        printf("\n|%-3d|%27s|%9s|%3.1f|%3.1f|%3.1f|", i+1, sv[i].HovaTen.hodem, sv[i].HovaTen.ten, sv[i].DiemCC, sv[i].DiemKT, sv[i].DiemTK);
    }
}

int main(){
        int n, i;
        printf("Nhap so sinh vien: ");
        scanf("%d", &n);
        struct Sinhvien sv[10];

        for (i=0; i<n; ++i){
            printf("Nhap thong tin sinh vien %d\n", i+1);

            getc(stdin);

            printf("Ho dem: ");
            gets(sv[i].HovaTen.hodem);

            printf("Ten: ");
            gets(sv[i].HovaTen.ten);

            printf("Ma sinh vien: ");
            scanf("%s", &sv[i].MaSV);

            printf("Diem chuyen can: ");
            scanf("%f", &sv[i].DiemCC);

            printf("DIem kiem tra: ");
            scanf("%f", &sv[i].DiemKT);

            printf("Diem thi: ");
            scanf("%f", &sv[i].DiemT);

        }

        //Tinh diem tong ket
        for (int i = 0; i < n; i++){
            sv[i].DiemTK = sv[i].DiemCC * 0.1 + sv[i].DiemKT * 0.2 + sv[i].DiemT * 0.7;
        }
        //In dssv
        indssv(sv, n);

        //Sap xep danh sach sinh vien theo thu tu giam dan cua diem TK
        struct Sinhvien temp;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(sv[i].DiemTK < sv[j].DiemTK){
                    temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }

        //In danh sach sinh vien sau khi sap xep
        printf("\nDanh sach sinh vien sau khi sap xep: ");
        indssv (sv, n);
    }

