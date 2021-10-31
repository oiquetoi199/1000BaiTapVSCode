#include "nhapXuat.h"

int chuSo(int n)
{
    int dem = 0;
    while(n > 0)
    {
        n/=10; 
        dem++;
    }
    return dem;
}

void demChuSo(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           dem += chuSo(a[i][j]);
        }
        
    }
    cout << "So chu so co trong mang la : " << dem << endl;
}

int main()
{ 
    int a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demChuSo(a, row, col);
}