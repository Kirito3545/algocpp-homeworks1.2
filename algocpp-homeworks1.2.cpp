#include <iostream>
#include <vector>
using namespace std;

int count_greater_than(vector<int>& arr, int x) {
    int l = 0;
    int r = arr.size() - 1;


    while (l <= r) {
        int mid = (l + r) / 2;
        if (x >= arr[mid]) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    return arr.size() - l;
}

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    vector<int> arr = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int x;
    cout << "Введите точку отсчета: ";
    cin >> x;
    int count = count_greater_than(arr, x);
    cout << "Количество элементов больше " << x << ": " << count << endl;
    return 0;
}