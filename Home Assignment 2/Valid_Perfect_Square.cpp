class Solution {
public:
    bool isPerfectSquare(int num) {
        // int s = 0 , e = INT_MAX;

        // while(s <= e){

        //     long long mid = s + (e-s)/2;
        //     long long prod = mid*mid;
        //     if(prod == num) return true;
        //     else if(prod > num){

        //         e = mid-1;

        //     }else{

        //         s = mid + 1;

        //     }

        // }

        // return false;



        //using newton method

        long x = num;

        while((x * x) > num){

            x = (x + num/x)/2;

        }

        if((x * x) == num) return true;

        return false;
    }
};