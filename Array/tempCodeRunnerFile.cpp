
        for(int j = i + 1; j < n; j++){
            if(arr[i] > 0 && arr[j] < 0){
                swap(arr[i], arr[j]);
            }
        }
    }