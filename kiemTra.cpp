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