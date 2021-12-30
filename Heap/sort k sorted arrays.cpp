void sortKSortedArray(vector<int> &nums, int k)
{
    // create an empty min-heap using `std::priority_queue`
    // use `std::greater` as a comparison function for min-heap
    priority_queue<int, vector<int>, greater<int>> pq;
 
    // insert the first `k+1` elements into a heap
    for (int i = 0; i <= k; i++) {
        pq.push(nums[i]);
    }
 
    int index = 0;
 
    // do for remaining elements in the array
    for (int i = k + 1; i < nums.size(); i++)
    {
        // pop the top element from the min-heap and assign them to the
        // next available array index
        nums[index++] = pq.top();
        pq.pop();
 
        // push the next array element into min-heap
        pq.push(nums[i]);
    }
 
    // pop all remaining elements from the min-heap and assign them to the
    // next available array index
    while (!pq.empty())
    {
        nums[index++] = pq.top();
        pq.pop();
    }
}
