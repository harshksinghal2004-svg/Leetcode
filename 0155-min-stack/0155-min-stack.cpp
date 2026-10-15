class MinStack {
public:
    MinStack() {  }
stack<long long >st;
long long  mini = LLONG_MAX;
    void push(int value) {
        if (st.empty()) {
            st.push(value);
            mini = value;

        }

        else if (value < mini) {
            st.push(2LL * value - mini);
            mini = value;
        } else
            st.push(value);
    }

    void pop() {
        if (st.empty())
            return;
        long long x = st.top();

        if (x < mini)
            mini = 2 * mini - x;
        st.pop();
    }

    int top() {
        if (st.empty())
            return 0;
        long long  x = st.top();
        if (x < mini)
            return mini;
        else
            return x;
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */