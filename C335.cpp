#include "nhapxuat.h"
#include <cmath>

bool ktNguyenTo(int a)
{
    if (a == 0 || a == 1)
    {
        return 0;
    }
    
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void demNguyenTo(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktNguyenTo(a[i][j]) == 1)
            {
                dem++;
            }           
        }       
    }
    cout << "Trong mang co (" << dem << ") so nguyen to\n";   
}

int main()
{
    int a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demNguyenTo(a, row, col);
}