int cbinsearch(int *arr, int size, int value){
    int counting = 0, numb = 0;
    int left = 0;
    int right = size - 1;

while (left <= right) {
   int middle = (left + right) / 2;

if (arr[middle] == value) {
        numb = middle;
        int a = numb - 1;
     while (arr[numb] == value) { 
     counting++; numb++; 
     }
       while (arr[a] == value){ 
       counting++; a--; 
       }
return counting;
}

else if (arr[middle] < value)
     left = middle + 1;

else if (arr[middle] > value)
     right = middle - 1;
}
return 0;
}
