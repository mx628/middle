# middle
#include <iostream>

using namespace std;
void bubble_sort(int * a, int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n + 1; j++){
            if(a[j-1] >  a[j]){
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}
int main()
{
    int n = 10;
    int a[n] = {10, 12};
    bubble_sort(a, n);
    return 0;
}
