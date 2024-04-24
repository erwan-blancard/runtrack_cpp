#include <iostream>
using namespace std;


int *addElement(int *int_array, int size, int element) {
    // alloc new space for array
    int *tmp = (int*)malloc(sizeof(int)*(size+1));
    if (!tmp)
        return tmp;

    // copy previous array
    memcpy(tmp, int_array, sizeof(int)*size);
    // append the element
    tmp[size] = element;
    // free mem
    free(int_array);

    return tmp;
}


void showTable(int *int_array, int size) {
    for (int i = 0; i < size; i++) {
        cout << int_array[i];
        if (i != size -1) cout << ", ";
    }
    cout << "\n";
}


int main(int argc, char const *argv[])
{
    int *int_array = (int*)malloc(sizeof(int)*5);   // allocate space for a 5 element int array

    for (int i = 0; i < 5; i++) {
        int_array[i] = i*2;
    }

    showTable(int_array, 5);
    int_array = addElement(int_array, 5, 34);
    showTable(int_array, 6);
    int_array = addElement(int_array, 6, 550);
    showTable(int_array, 7);
    int_array = addElement(int_array, 7, -1);
    showTable(int_array, 8);

    return 0;
}
