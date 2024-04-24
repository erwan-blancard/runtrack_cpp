#include <iostream>
using namespace std;

// returns a pointer to the smallest int value in an int array
int *minimum(int *int_array[], int size) {
    int prev_min_val = INT_MAX;
    int *min_ptr = NULL;
    for (int i = 0; i < size; i++) {
        if (*int_array[i] < prev_min_val) {
            prev_min_val = *int_array[i];
            min_ptr = int_array[i];
            // cout << "new min_ptr: " << min_ptr << " (" << int_array << " + " << sizeof(int)*i << ")\n";
        }
    }

    return min_ptr;
}


int main(int argc, char const *argv[])
{
    int values[5] = {12, 45, 8, 6, 55};

    int **int_array = (int **)malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++) {
        int *ptr = (int*)malloc(sizeof(int));
        *ptr = values[i];
        int_array[i] = ptr;
    }
    
    cout << "Min value: " << *minimum(int_array, 5);
    return 0;
}
