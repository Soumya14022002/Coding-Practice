class MyStack {
private:
    queue<int> q;
public:
    void push(int x) {
        queue<int> q2;
        while (!q.empty()) {
            q2.push(q.front());
            q.pop();
        }
        q.push(x);
        while (!q2.empty()) {
            q.push(q2.front());
            q2.pop();
        }
    }
    int pop() {
        int n = q.front();
        q.pop();
        return n;
    }
    int top() { return q.front(); }
    bool empty() { return q.empty(); }
};
