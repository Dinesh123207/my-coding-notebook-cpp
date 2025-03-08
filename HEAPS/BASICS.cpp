/*Heap Creation and Deletion  and Heapify

We initialize the index from 0 but store elements from index 1 since arr[0] cannot be a parent (no integer index divided by 2 gives 0).

Heap creation starts at index 1, ensuring a complete binary tree while maintaining the heap property (parent larger than children in max heap). A newly 
inserted node is compared with its parent and moved accordingly. Since a node can move up to the root, its max travel is log n, leading to an overall time 
complexity of O(n log n) when inserting n nodes.

In deletion, the root is replaced with the last node to maintain the complete binary tree. The replaced node is then moved downward by comparing 
it with its left and right children, swapping with the larger child to maintain the heap property. This continues until it reaches its correct position. 
Since a node can move log n levels, deletion takes O(log n) per node and O(n log n) for deleting all n elements.

Heapify is used to build a heap efficiently from an existing unordered array. We start from the last non-leaf node (size/2) and move upward to the root, 
calling heapify on each node. Each node is compared with its left and right children, and the largest among them is swapped if necessary. This continues 
recursively until the node reaches its correct position. Since only half of the tree needs processing, heapify runs in O(n) time for entire structure which is 
better than other two process. For one node we assume that it takes o(1) time. But it can have worst time complexity as compared to other two process if 
a min heap is reaaranged to convert into max heap using heapify.
 */

 #include<iostream>
 using namespace std;
 
 class heap{
     public:
     int arr[100];
     int size =0;
 
 void print_array (){
     for(int i =1; i<size+1; i++){
         cout<<arr[i]<<endl;
     }
     }
 
 // we are assuming that the heap that we are inserting in is already a heap and after inserting an element at its arr[size++] position, we are disturbing 
 /*the parent-child property of heap.
 
 For heap creation, we first increase the size of the array, store that size in index, and insert the value at that position. Then, we access the parent 
 of index by dividing it by 2. We continuously check the heap condition from bottom to top. If the newly added element is larger than its parent, we keep 
 swapping it upward, updating index to its parent's position each time. This process continues until index becomes 1, as there is no parent beyond that.
 The Time complexity is log n because a node has to traverse from down to up, and since the ehap property is maintained throughout, the max distance a node would
 take to swap the position within the height of the tree is log n and for n nodes it is n log n.
 */
 
 // We create max heap
 
 void creation_heap (int value){
     size += 1;
     int index = size;
     arr[index] = value;
     
     while(index>1){
     int parent =index/2;
 
         if(arr[parent] < arr[index]){
             swap(arr[parent], arr[index]);
             index = parent;
 
         }
         else{
             return;
         }
     }
 }
 
 // we delete from max heap
 
 void deletion_heap() {
     if (size == 0) {
         return;
     }
 
     // Step 1: Replace root with last element
     arr[1] = arr[size];
 
     // Step 2: Remove last element
     size--;
 
     // Step 3: Restore heap property
     int parent = 1;
 
     while (parent <= size) {  // Ensure parent is within bounds , movement of parent is 
         int r_child = 2 * parent;
         int l_child = 2 * parent + 1;
         int largest = parent;
 
         // Check if left child exists and is greater than parent
         if (l_child <= size && arr[l_child] > arr[largest]) {
             largest = l_child;
         }
 
         // Check if right child exists and is greater than largest so far
         if (r_child <= size && arr[r_child] > arr[largest]) {
             largest = r_child;
         }
 
         // If the parent is in the correct position which means they have no children or both of its children are smaller, stop
         if (largest == parent) {   //
             return;
         }
 
         // Swap parent with the larger child and update the index
         swap(arr[parent], arr[largest]);
         parent = largest;    // every time parent is going downwards, and its left and right index are moving acordingly
     }
 }
 
 // Rearrangement to make it a min heap
     void heapify(int parent) {
         int largest = parent;
         int leftchild = 2 * parent;
         int rightchild = 2 * parent + 1;
 
         if (leftchild <= size && arr[leftchild] < arr[largest]) {
             largest = leftchild;
         }
         if (rightchild <= size && arr[rightchild] < arr[largest]) {
             largest = rightchild;
         }
 
         if (largest == parent) {
             return; // ✅ Already a heap
         } else {
             swap(arr[largest], arr[parent]);
             heapify(largest); // ✅ No need for additional conditions!
         }
     }
 
     void buildHeap() {
         for (int i = size / 2; i > 0; i--) {
             heapify(i);
         }
     }
 };
 
 
 int main(){
     heap h;
     h.creation_heap(8);
     h.creation_heap(2);
     h.creation_heap(7);
     h.creation_heap(5);
     h.creation_heap(4);
     h.print_array();
     h.deletion_heap();
     h.print_array();
     h.buildHeap();
     h.print_array();
     
 return 0;
 }