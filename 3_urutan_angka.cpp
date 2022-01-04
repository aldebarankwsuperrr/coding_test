#include <iostream>
using namespace std;

#define swap(a,b) a = b - a + (b=a)

int digit(int a){
    if (a > 9){
        return digit(a/10);
    }
    return a;
}


int tanda (int arr[], int low, int high){
    int i = low-1;
    for (int j = low; j < high;j++){
        if (digit(arr[j]) == digit(arr[high])){
            if (arr[j] < arr[high]){
                i++;
                swap(arr[j],arr[i]);
            }
        }else if (digit(arr[j]) < digit(arr[high])){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void sort (int arr[], int low, int high){
    if (low < high){
        int pos = tanda (arr, low, high);

        sort(arr, low, pos-1);
        sort(arr, pos+1, high);
    }
}



int main (){
    int n;
    int* x;

   
    cin >> n;
    x = new int (n);

    for (int i = 0; i < n;i++){
        cin >> x[i];
    }

    sort(x, 0, n-1);

    cout << endl;
    for (int i = 0 ; i < n;i++){
        cout << x[i] <<  " ";
    }



    return 0;
}