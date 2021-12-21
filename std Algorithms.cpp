1. find function : 
    
    array<int,5> arr{1,2,3,4,5};

    auto it =  find(arr.begin(),arr.end(),5);
    if(it != arr.end()) 
    {
           cout<<"element found at index "<<it-arr.begin()<<endl;
    } 
    else if (it==arr.end())     
       cout<<"element not found "<<endl;  
