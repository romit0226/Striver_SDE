// First Approach - Sort the array and find missing & repeating number

// Second Approach- Use map and xor

    int *findTwoElement(int arr[], int n) {
      unordered_map<int,int> m;
      int xort=0;
      for(int i=0;i<n;i++){
          m[arr[i]]++;
          xort^=arr[i];
      }
      int repeating=0;
      for(auto i:m){
          if(i.second==2){
              repeating=i.first;
              break;
          }
      }
      for(int i=1;i<=n;++i){
          xort^=i;
      }
      int missing=xort^repeating;
      int *array = (int *) malloc(2 * sizeof(int));
      array[0]=repeating;
      array[1]=missing;
      return array;
      
       
    }
};



