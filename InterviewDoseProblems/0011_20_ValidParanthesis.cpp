Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

 

Example 1:

Input: s = "()"
Output: true

Example 2:

Input: s = "()[]{}"
Output: true


class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for(char ch:s){
            if(ch=='(' || ch=='[' ||ch=='{')
               v.push(ch);
            else if((ch ==']' || ch=='}'||ch==')' )&&(v.empty())) return false;
            else if(v.top()=='(' && ch==')' && !v.empty()) v.pop();
            else if(v.top()=='[' && ch==']' && !v.empty()) v.pop();
            else if(v.top() == '{' && ch=='}' && !v.empty()) v.pop();
            else return false;
        }
        if(v.empty()) return true;
        else return false;
    }
};