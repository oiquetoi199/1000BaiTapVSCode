#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col)
{
    int dem = 0;   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem++;
        }
    }
}

// b co phai con a khong
void bCona(int a[MAX][MAX], int b[MAX][MAX], int rowa,  int cola, int rowb, int colb)
{
    int vtDau = b[0][0];
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < cola; j++)
        {
            if ((rowa - i) < rowb || (cola - i) < colb)
            {
                break;
            }
        }
        
    }
    
}

int main()
{
    int a[MAX][MAX];
    int b[MAX][MAX];
    int rowa, cola, rowb, colb;
    rowa = 5;
    cola = 5;
    rowb = 3;
    colb = 5;
    nhapTuDong(a, rowa, cola);
    nhapTuDong(b, rowb, colb);
    xuatMang(a, rowa, cola);
    xuatMang(b, rowb, colb);

    return 0;
}