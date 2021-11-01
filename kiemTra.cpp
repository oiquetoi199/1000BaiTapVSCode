#include "kiemTra.h"

bool ktNguyenTo(int n)
{
    if (n <= 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool ktChinhPhuong(int n)
{
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (i * i == n)
            return 1;
    }
    return 0;
}

bool ktHoanThien(int n)
{
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            temp += i;
        }
    }

    if (temp == n) 
        return 1;
    return 0;
}