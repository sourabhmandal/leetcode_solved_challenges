class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int hare=0, tort=0;
        
        do{
            hare = v[v[hare]];
            tort = v[tort];
        }while(hare != tort);
        
        hare = 0;
        
        while(v[hare] != v[tort] ){
            hare = v[hare];
            tort = v[tort];
        }
        return v[hare];
    }
};


/*
* used floyds cycle algorithm
* consider each element as a node
* the place where the cycle is formed is the duplicate element
* find duplicate in number
*/
