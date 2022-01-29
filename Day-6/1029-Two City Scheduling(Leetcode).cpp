/* Approach 
* First I will send all the persons to city A and will store the total amount I have spend
* Then I will analyse where we went wrong(i.e where I should have to send B intead of B)
* for this I will store the diference in cost of a particular from B to A (Cost(B)-cost(A))
* If this diff is +ve that means we did good this (cost(A)<Cost(B))
* I this difference is -ve that means we did bad thing (cost(B)<cost(A))
* Now we will sort the differences in the ascending order
* Now, for first n/2 person our difference will be very -ve ... what i will do....now i will tell the particular person that ...i will send you to B instead of A as this way is more cheapier...so in total amount i will add money required to send B and will refund the difrence we got

*/



class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int total_sending_A=0;
        
        for(int i=0;i<costs.size();i++)
        {
            total_sending_A+=costs[i][0];
        }
        
        vector<int> differences;
        
        for(int i=0;i<costs.size();i++)
        {
            differences.push_back(costs[i][1] - costs[i][0]);
        }
        
        sort(differences.begin() , differences.end());
        
        for(int i=0;i<differences.size()/2;i++)
        {
            total_sending_A+=differences[i];
        }
        return total_sending_A;
    }
};