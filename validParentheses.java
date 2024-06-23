import java.util.*;

public class validParentheses {
     public static boolean isValid(String s) {
        Stack <Character> st = new Stack<>();
       for(int i=0;i<s.length();i++){
        if(s.charAt(i)=='('||s.charAt(i)=='{'||s.charAt(i)=='['){
            st.push(s.charAt(i));
        }
        else if(st.isEmpty())return false;

if((s.charAt(i)==')')&&st.pop()!='('   
|| (s.charAt(i)=='}')&&st.pop()!='{' 
||(s.charAt(i)==']')&&st.pop()!='[')return false;

        
       }
    return st.isEmpty();}
        
    
public static void main(String[] args) {
    System.out.println(isValid("()"));
}
}

