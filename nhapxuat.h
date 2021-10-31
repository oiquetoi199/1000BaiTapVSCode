#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 100

template <class dataType>
void nhapMang(dataType a[][MAX], int row, int col);

template <class dataType>
void xuatMang(dataType a[][MAX], int row, int col);

template <class dataType>
void xuatMang2(dataType a[][MAX + 2], int row, int col);

#include "nhapXuat.tpp"