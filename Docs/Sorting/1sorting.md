# Sorting technique
## Selection sort
- **Note:**  it is taking the minimum to the front
- 1 select the minimum and swap 
- 2 second minimum and swap 
   example
   ```python
   13, 46 , 24, 52 , 20 ,9 original
   9, 46 , 24, 52 , 20 ,13 step 1
   9, 13 , 24, 52 , 20 ,46 step 2
   9, 13 , 20, 52 , 24, 46 step 3
   9, 13 , 20, 24, 52 , 46 step 4
   9, 13 , 20, 24, 46, 52  step 5

   swap at index 0 & min index [0-n-1]
   swap at index 1 & min index [1-n-1]
   swap at index 2 & min index [2-n-1]
   swap at index 3 & min index [3-n-1]
   swap at index 4 & min index [4-n-1]
   swap at index 5 & min index [5-n-1]

   for finiding minimum lets asume that minimum is the that index itseld i

   ```
    ```c++
    void selection_sort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
tc --> o(n^2)
    ```




## Bubble sort
- **Note:**  it pushes the maximum elemnt to the last 
- 1 compare adjacent elements and swap if they are in wrong order

```python
13 46 24 52 20 9
round 1
step 1
13 24 46 52 20 9
step 2
13 24 46 20 52 9
step 3
13 24 46 20 9 52 // the max 52 is at the last 
// last one is sorted now so repeat the process again 
round 2 
46 will move to second last 
and so on ................

```

```c++
void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>0;i--){
        // optimise
        int didswap =0;
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) break;
    }
}
tc -->o(n^2)
best tc = o(n)
```
## Insertion sort
 it takes the element and put it in its correct position 
 - 1 take the first element and put it in its correct position
 











