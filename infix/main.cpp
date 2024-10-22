#include "infixtopost.h"

int main()
{
    stack S;
    string prefix,infix;
    createStack_1301223017(S);
    //string exp = "2*3/(2-1)+5*3";
    // string exp = "a+b*(c^d-e)^(f+g*h)-i";
    //string exp = "45+72-*";
    // string exp = "A-B/(C*D^E)";
    //string exp = "(AX*(BX*(((CY+AY)+BY)*CX)))";
    //  string exp = "(6^(8/4))/((1+5)-3)";
    string exp = "684/^15+3-/";
    cout << infixToPostfix(exp,S) << endl;
    cout << infixToPrefix(exp) << endl;
    cout << evaluatePostfix(exp,S) << endl;
    cout << evaluatePrefix(infixToPrefix(exp),S) << endl;
    return 0;
}
