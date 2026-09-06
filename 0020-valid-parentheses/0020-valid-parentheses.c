#define size 10000000
struct stack{
    char items[size];
    int top;
};
void push(struct stack *s,char c){
     if(s->top==size-1){
        return;
     }
     else{
     s->items[++s->top]=c;
}}
char pop(struct stack *s){
    
    return s->items[s->top--];
    
}
int matching(char open,char close){
    if(open=='('&& close==')'){
        return 1;
    }
    if(open=='['&& close==']'){
        return 1;
    }
    if(open=='{'&& close=='}'){
        return 1;
    }
    return 0;
}
bool isValid(char* s) {
    struct stack st;
    st.top=-1;
    int valid=1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            push(&st,s[i]);
        }
        else if(s[i]==')'||s[i]==']'||s[i]=='}'){
             if(st.top==-1){
                valid=0;
                break;
             }
              char open=pop(&st);
              int m=matching(open,s[i]);
              if(m==0){
                valid=0;
                break;
              }
         }
    }
    if(st.top!=-1){
        valid=0;
    }
    if(valid==0){
        return false;
    }
    else{
        return true;
    }

}
