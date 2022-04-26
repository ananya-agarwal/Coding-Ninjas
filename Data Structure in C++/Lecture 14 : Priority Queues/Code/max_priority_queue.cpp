#include<vector>

class PriorityQueue {
    // Declare the data members here

   vector<int> pq;
   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here 
        pq.push_back(element);
        int childIndex = pq.size()-1;
        
        while(childIndex > 0)
        {
            int pI = (childIndex-1)/2;
            
            if(pq[childIndex] > pq[pI])
            {
                int temp = pq[pI];
                pq[pI] = pq[childIndex];
                pq[childIndex] = temp;
            }
            
            else
                break;
            
            childIndex = pI;
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size() == 0;
    }
    
    int getMax() {
        // Implement the getMax() function here
        if(isEmpty())
            return 0;
        return pq[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty())
            return 0;
        
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        
        int pI = 0;
        int LCI = 1;
        int RCI = 2;
        
        while(LCI < pq.size())
        {
            int maxIndex = pI;
            
            if(pq[LCI] > pq[maxIndex])
                maxIndex = LCI;

            if(pq[RCI] > pq[maxIndex] && RCI < pq.size())
                maxIndex = RCI;
            
            if(maxIndex == pI)
                break;
            
            int temp = pq[maxIndex];
            pq[maxIndex] = pq[pI];
            pq[pI] = temp;
            
            pI = maxIndex;
            LCI = 2*pI+1;
            RCI = 2*pI+2;
        }
        return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

};
