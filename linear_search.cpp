#include <iostream>
using namespace std;

bool linear_Search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}


int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the element u wanna find: ";
    cin >> key;
    int result = linear_Search(arr, n, key);
    if(result == 1){
        cout << "element found";
    }
    else{
        cout << "element not found";
    }

}