class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int fiveDollerBill = 0,tenDollerBill = 0;

        int n = bills.size();

        for(int i = 0 ; i < n ; i++){

            if(bills[i] == 5)fiveDollerBill++;
            else if(bills[i] == 10){

                if(fiveDollerBill > 0){

                    fiveDollerBill--;
                    tenDollerBill++;

                }else return false;                

            }else {

               if(tenDollerBill > 0 && fiveDollerBill > 0){

                    tenDollerBill--;
                    fiveDollerBill--;

               }else if(fiveDollerBill > 2){

                    fiveDollerBill -= 3;

               }else{

                    return false;

               }

            }

        }

        return true;
    }
};