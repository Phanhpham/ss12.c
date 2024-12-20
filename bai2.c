#include <stdio.h>

int main()
{
    int n, i, max;

    printf("Nhập kích thước của mảng: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhập các phần tử của mảng:\n");
    for (i = 0; i < n; i++)
    {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Phần tử lớn nhất trong mảng là: %d\n", max);

    return 0;
}
