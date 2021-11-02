#include "nhapxuat.h"
#include <cmath>

void chuSo(int n,int b[10])
{
    int chuSo;
    n = abs(n);
    do
    {
        chuSo = n % 10;
        b[chuSo]++;
        n /= 10;

    } while (n > 0);
}

void chuSoXuatHienNhieuNhat(int a[][MAX], int row, int col)
{
    int b[10] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            chuSo(a[i][j], b);
        }
    }
    
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        if (b[temp] < b[i])
        {
            temp = i;
        }
    }
    cout << "Chu so xuat hien nhieu nhat trong mang la : " << temp << endl; 
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    chuSoXuatHienNhieuNhat(a, row, col);
    return 0;
}