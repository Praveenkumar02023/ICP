class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people),end(people));

        int n = people.size();

        int req_boats = 0;

        int i = 0 , j = n-1;

        while(i <= j){

            req_boats++;

            if(people[i] + people[j] <= limit){

                i++;
                j--;

            }else{
                j--;
            }

        }

        return req_boats;
    }
};