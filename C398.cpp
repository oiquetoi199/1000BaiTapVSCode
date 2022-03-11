// dich phai xoay vong theo chieu kim dong ho
#include "nhapxuat.h"

void dichPhaiXoayVongTheoChieuKimDongHo(int a[][MAX], int row, int col)
{
    // lay 1 gia tri ra
    int temp = a[0][0];

    // dich phan tu canh trai len tren
    for(int i = 0; i < row - 1; i++)
    {
        a[i][0] = a[i + 1][0];
    }
    
    // dich canh duoi sang trai
    for(int i = 0; i < col; i++)
    {
        a[row - 1][i] =  a[row -1][i + 1];
    }

    // dich canh phai xuong duoi
    for(int i = row - 1; i > 0; i--)
    {
        a[i][col - 1] = a[i - 1][col - 1];
    }

    // dich canh tren sang trai
    for (int i = col - 1; i > 0; i--)
    {
        if(i == 1)
            a[0][i] = temp;
        else
            a[0][i] = a[0][i - 1];
        
    }
}

int main()
{
    int a[MAX][MAX];
    int row = 4, col = 6;
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    dichPhaiXoayVongTheoChieuKimDongHo(a, row, col);
    xuatMang(a, row, col);
    return 0;
}