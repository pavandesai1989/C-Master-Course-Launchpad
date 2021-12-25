#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//implement using vectors
class heap
{
private:
    vector<int> m_vec;
    bool m_minheap;
    bool compare(int a,int b)
    {
        if(m_minheap)
            return b>a;
        else
            return a>b;
    }
public:
    heap(int default_size=10,bool minheap=true){
        m_vec.reserve(default_size);
        m_vec.push_back(-1); //we dt use first block
        m_minheap = minheap;
    }
    
    void print()
    {
        vector<int>::iterator it = m_vec.begin();
        std::advance(it,1);
        for(it;it!=m_vec.end();it++)
        {
            cout<< (*it) <<" ";
        }
    }
//
    void push(int x){
        m_vec.push_back(x);
        unsigned long idx = m_vec.size()-1; //current index at which we need insertion
        //get the parent
        unsigned long parent = idx/2;
        
        //compare till root
        while(idx>1 && compare(m_vec[idx],m_vec[parent]))
        {
            swap(m_vec[idx],m_vec[parent]);
            //update idx and parent
            idx = parent;
            parent = idx/2;
            
        }
    }
};


int main()
{
    heap myheap(5,true);
    myheap.push(1);
    myheap.push(2);
    myheap.push(3);
    myheap.push(0);
    
    myheap.print();   // 0 1 3 2 

}
