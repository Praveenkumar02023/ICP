class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        if(n == 0) return n;

        stack<int>st;

        for(int i = 0 ; i < n ; i++){
            string s = tokens[i];
            if(s.size() == 1 && s[0] < '0' && s[0] > 9){

                int a  = 0 , b = 0;
               if(!st.empty()){
                    a = st.top();
                    st.pop();
               }
               
                if(!st.empty()){

                    b = st.top();
                    st.pop();

                }

                int res = 0;
                if(s[0] == '+'){

                    res = a + b;

                }else if(s[0] == '-'){

                    res = b-a;

                }else if(s[0] == '*'){
                    res = a* b;
                }else{
                    res = b/a;
                }

                st.push(res);

            }else{
                st.push(stoi(s));
            }
 
        }

        return st.top();
    }
};