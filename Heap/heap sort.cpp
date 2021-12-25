#include<iostream>
#include<vector>
using namespace std;


void heapify(vector<int> &vec,int idx,int size)
{
    //get the left and right child
    int left = 2*idx;
    int right = 2*idx + 1;
    int max = idx;
    int last = size-1;
    
    if(left<=last && vec[left]>vec[idx])
        max = left;
    
    if(right<=last && vec[right]>vec[max])
        max = right;
    
    if(max!=idx)
    {
        swap(vec[max],vec[idx]);
        heapify(vec,max,size);
    }
    
}

void buildmaxheap(vector<int> &vec)
{
    //get the last non leaf node
    int last = static_cast<int> ((vec.size()-1)/2);
    for(int i=last;i>=1;i--)
    {
        heapify(vec,i,static_cast<int>(vec.size()));
    }
}

void heapsort(vector<int> &vec)
{
    //build max heap from the array
    buildmaxheap(vec);
    int n = static_cast<int> (vec.size());
    
    //remove the last ele
    while(n>1)
    {
        swap(vec[1],vec[n-1]);
        //remove last ele. reduce size
        n--;  //imp step
        heapify(vec,1,n);
    }
}

int main()
{
    vector<int> v = {-1,2,1,0,4,3};
    
    heapsort(v);
    //print
    cout<<"max heap is "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    
}
