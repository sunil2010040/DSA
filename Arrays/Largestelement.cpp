#include<bits/stdc++.h>
using namespace std;

// Time Complexity is Theta(n)

int getLargest(int arr[], int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[res]){
            res = i;
        }
        return res;
    }
    
}

// Time Complexity is O(n^2)

// int getLargest(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 break;
//             }  
//         }
//         if(flag == true){
//             return i;
//         }
//     }
//         return -1;
//     }

    int main()
    {
        int arr[] = {5, 6, 14, 8};
        cout << getLargest(arr, 4);
        return 0;
    }
