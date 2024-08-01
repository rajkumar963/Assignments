class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    

    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        while (q2.size() > 0) {
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
    }

    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        while (q2.size() > 0) {
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(temp);
        return temp;
    }

    bool empty() {
        if (q1.size() == 0)
            return true;
        else
            return false;
    }
};
