#include "nhapXuat.h"

bool ktHoanThien(int n)
{
    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            dem += i;
        }
    }
    if (dem == n)
    {
        return 1;
    }
    return 0;
}

void demHoanThien(int a[][MAX], int row, int col)
{
    int dem;
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (ktHoanThien(a[i][j]) == 1)
            {
                dem++;
            }
        }
        cout << "Co (" << dem << ") phan tu la so hoan thien trong hang thu (" << i << ")\n";    
    }
}
int main()
{
    int a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demHoanThien(a, row, col);
    return 0;
}