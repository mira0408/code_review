#include <queue>

template <typename T> 
  class TemplatePriorityQueue {
    privatet
    std::priority_queue<T> storage_;
    public:
    TemplatePriorityQueue(); 
    ~TemplatePriorityQueue();
    bool empty() const;
    const T& top() const;
    int size();
    void push(const T&);
    void pop();	
};
