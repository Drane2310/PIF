#include <stdio.h>
#include <stdlib.h>

int khoi_tao_mang()
{
    int n = 0;
    while ((n <= 0) || (n > 16))
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }
    printf("Khoi tao mang int arr[%d]\n", n);
    return n;
}

int * nhap_gia_tri(int n)
{
    static int arr[16];
    printf("Nhap gia tri tung phan tu: \n");
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

void in_mang(int * arr, int n)
{
    printf("arr[] = { ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("}\n");
}

void in_dia_chi(int * arr, int n)
{
    printf("Dia chi cua tung phan tu: \n");
    for(int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %d\n", i, (arr + i));
    }
}

void trung_binh(int * arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }
    double average = (double)sum / n;
    printf("Gia tri trung binh la: %.3f", average);
}

int main()
{
    int n = khoi_tao_mang();
    int *arr;
    arr = nhap_gia_tri(n);
    in_mang(arr, n);
    in_dia_chi(arr, n);
    trung_binh(arr, n);
    return 0;
}