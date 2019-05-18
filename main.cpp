#include <iostream>

using namespace std;

/*
function for swaping two items
@param a: a pointer to the one of the three colors
@param b: a pointer to the one of the three colors
*/
void swap(string *a, string *b){
    string temp = *a;
    *a = *b;
    *b = temp;
}

/*
Function for sorting the Red Blue and White colors from a random array of these 3 colors
@param a : dynamic array
@param size: size of the array
*/
void sort(string *arr, int size){
    int low = 0;
    int mid = 0;
    int high = size - 1;

    while(mid <= high){
        if(arr[mid] == "Red"){
            swap(&arr[low++], &arr[mid++]);
        }
        else if(arr[mid] == "Blue"){
            mid++;
        }
        else if(arr[mid] == "White"){
             swap(&arr[mid], &arr[high--]);
        }
    }
}

/*
main function
*/
int main()
{
    int size = 8;
    string *colors = new string[size]{"White", "Red", "Blue","Red","White", "Blue", "Red","Blue"};

    //calling the sorting function over the array colors
    sort(colors,size);

    //Printing of the array
    for(int i = 0; i < size; i++){
        cout<<colors[i]<<endl;
    }

    //deletion of the dynamic 'colors' array
    delete[] colors;
    colors = nullptr;

    return 0;
}
