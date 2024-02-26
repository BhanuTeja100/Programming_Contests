int* game_with_number(int arr[], int n)
{
    // traverse the array till n-2
    
    for(int i=0; i<n-1; i++){
        // Or operation over the array elements
        arr[i] = arr[i] | arr[i+1];
    
    }
    
    // returning the array pointer
    return arr;
    
}
