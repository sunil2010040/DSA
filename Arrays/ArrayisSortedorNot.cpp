  #include<bits/stdc++.h>
  using namespace std;

bool isSorted(int arr[], int n){
for (int i = 0; i < n; i++)
{
    if(arr[i] < arr [i-1]){
        return true;
    }
    return false;
}

}

    int main()
    {
        int arr[] = {5, 6, 14, 8};
        cout << isSorted(arr, 4);
        return 0;
    }
