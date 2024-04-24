#include <iostream>
using namespace std;

// returns a pointer to the smallest int value in an int array
int *minimum(int *int_array, int size) {
    int prev_min_val = INT_MAX;
    int *min_ptr = NULL;
    for (int i = 0; i < size; i++) {
        if (int_array[i] < prev_min_val) {
            prev_min_val = int_array[i];
            min_ptr = int_array + i;
            // cout << "new min_ptr: " << min_ptr << " (" << int_array << " + " << sizeof(int)*i << ")\n";
        }
    }

    return min_ptr;
}


int main(int argc, char const *argv[])
{
    int int_array[] = {1, 2, 3, 0, 5};
    cout << "Min value: " << *minimum(int_array, 5);
    return 0;
}
