class Solution {
public:

                                                    
    long long totalCost(vector<int>& costs, int k, int candidates) {
      priority_queue <int , vector<int>, greater<int>> min_heap1;

      for(int i =0; i<candidates;i++){
        min_heap.push(costs[i]);
      }

      priority_queue <int, vector<int>, greater<int>> min_heap2;
      int last_index = costs.size();
      for(int i = (last_index -1) ; i>=candidate; i++){
        min_heap2.push(costs[i]);
      }

      int ptr1 =0;
      int ptr2= 0;

        int size = 0;
      int arr [k];

while (size <= 4 ){
      if(min_heap1[ptr1] = min_heap2[ptr2]){
            int arr[size] = min_heap1[ptr1];
            size++;


            ptr1++;
         }
    else if (min_heap1[ptr1]< min_heap2[ptr2]){
            int arr [size]= min_heap1[ptr1];
            size++;
            ptr1++;
    }
    else{
        int arr[size]= min_heap[ptr2];
        size++;
        ptr2++;
    }
    } 
    int a =0;
for (int i =0; i<k; i++){
    int a += arr[i];
}
return a;

    }

};