// Using RECURSION

#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int index,int ele)                      // hence it is in int type I'm returning the values
{
    if(arr[index] == ele){
        //cout << "element found at index " << index << endl;     // if the function is void type then I'll uncomment these lines
        return index;
    }
    else if(index == -1){
        //cout << "element is not there in the given array";
        return -1;
    }
    return linearsearch(arr,index-1,ele);
}
int main(){
    int arr[] = {5, 7, 9, 10, 0};
    int index = sizeof(arr)/sizeof(arr[0]);
    int ele = 0;
    int ans = linearsearch(arr,index-1,ele);
    if(ans > -1){
        cout << "Element is found at " << ans << endl;
    }
    else{cout << "Element is not found";}
}




// Normal Recursion


#include<bits/stdc++.h>
using namespace std;
void linearsearch(int arr[], int len, int ele){
    for(int i = 0; i < len ; i++){
        if(arr[i] == ele){
            cout << "Element is found at "<< i << endl;
            return;
        }
    }
    cout << "Element is not found";
    return;
}
int main(){
    int arr[] = {10, 23, 78, 90, 100};
    int len = sizeof(arr)/sizeof(arr[0]);
    int ele = 900;
    linearsearch(arr, len-1, ele);
}


// PRACTICE PROBLEMS

// Max element in the given array
#include<bits/stdc++.h>
using namespace std;
int max_linearsearch(int arr[], int n){
    int maxi = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int main(){
    int arr[] = {10, 3, 89, 909, 345};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = max_linearsearch(arr,n);
    cout << "Maximum element in the given array is " << ans << endl;
}


// Using Recursion

#include<bits/stdc++.h>
using namespace std;
int max_linearsearch(int *arr, int n, int maxi){
    if(n == 0){
        return maxi;
    }
    else if(arr[0] > maxi){
        maxi = arr[0];
    }
    return max_linearsearch(arr+1, n-1, maxi);
}
int main(){
    int arr[] = {10, 30, 56, 789, 2300, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = -1;
    cout << max_linearsearch(arr, n-1, maxi);
}




// SENTINEL LINEAR SEARCH  ---> in this the last value is modified to the key value and linear search is performed upto last but one elements.

#include<bits/stdc++.h>
using namespace std;
void sentinel(int arr[], int n, int ele){
    int last = arr[n-1];
    arr[n-1] = ele;
    int i = 0;
    while(arr[i] != ele){
        i++;
    }
    arr[n-1] = last;
    if(i < (n-1) || arr[n-1] == ele){
        cout << "Element is found at " << i << " index";
    }
    else{
        cout << "Element is not found";
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 600, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 3;
    sentinel(arr, n, ele);
}
