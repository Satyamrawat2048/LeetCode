class NumberContainers
{
public:
    map<int,int> mp ;
    NumberContainers()
    {
    }

    
    void change(int ind, int num)
    {   
       mp[ind] =num ;
    }

    int find(int n)
    { for(auto it:mp)
    {
        if(it.second ==n) return it.first ;
    }
     return -1 ;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */