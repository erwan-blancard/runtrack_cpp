#include <iostream>
#include <string.h>
using namespace std;


void MySortString(char** strArray) {
    bool swapped = true;

    while (swapped) {
        swapped = false;

        int i = 0;
        while (strArray[i] != NULL && strArray[i+1] != NULL) {
            if (strcmp(strArray[i], strArray[i+1]) == 1) {
                swapped = true;
                char *tmp = strArray[i];
                strArray[i] = strArray[i+1];
                strArray[i+1] = tmp;

            }
            i++;
        }

    }
}


int main()
{
    char values[4][32] = {"ZERTGB", "DFGHJKs", "ABCD", "AbCD"};

    char **strArray = (char **)malloc(sizeof(char*) * 5);
    for (int i = 0; i < 5; i++) {
        char *ptr = (char*)malloc(sizeof(char)*32);
        if (i == 4) {
            ptr = NULL;
        } else {
            ptr = values[i];
        }
        strArray[i] = ptr;
    }

    int i = 0;
    while (strArray[i] != NULL) {
        cout << strArray[i] << "\n";
        i++;
    }

    MySortString(strArray);

    cout << "\n";

    i = 0;
    while (strArray[i] != NULL) {
        cout << strArray[i] << "\n";
        i++;
    }


    return 0;
}
