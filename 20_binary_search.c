#include<stdio.h>

int BinarySearch(int arr[], int start, int end, int key){
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 11, 15, 17, 19, 21};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]);
    int key;
    scanf("%d", &key);
    int matched = BinarySearch(arr, start, end, key);
    if(matched)
        printf("T");
    else
        printf("F");    
    return 0;
}