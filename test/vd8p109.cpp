#include <iostream>
using namespace std;

void nhap(int *, int);
void in(int *, int);

int main(void)
{
    int a[10];
    nhap(a, 7);
    in(a, 3);
}

void nhap(int myArr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> myArr[i];
}

void in(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
}