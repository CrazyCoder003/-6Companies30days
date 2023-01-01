class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>st;
        int res=0;
        for(int i=0;i<tokens.size();i++){
                if(tokens[i]=="+"){
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                    res=y+x;
                    st.push(res);
                }
                 else if(tokens[i]=="-"){
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                    res=y-x;;
                    st.push(res);
                }
                else  if(tokens[i]=="*"){
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                    res=y*x;
                    st.push(res);
                }
                else if(tokens[i]=="/"){
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                    res=y/x;
                    st.push(res);
                }
            else{
                st.push(stoi(tokens[i]));
                }
            }
        return st.top();
    }
};
