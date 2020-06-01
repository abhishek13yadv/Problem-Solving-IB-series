int Solution::repeatedNumber(const vector<int> &A) {
    int slow = A[0];
    int fast = A[A[0]];
    while(slow!=fast)
    {
        slow = A[slow];
        fast = A[A[fast]];
    }
    fast = 0;
    while(slow!=fast)
    {
        slow = A[slow];
        fast = A[fast];
    }
    return slow;
}

/*
Phase1: Take 2 pointers slow and fast. Fast moves with double the speed of slow. If there is a cycle the two pointers will meet somewhere.

Phase2: Keep the fast pointer where it is. Move the slow pointer to the start of the linked list. Now advance both the pointers at the same speed. The point where they meet is the start node of a loop.
In our case, that is our duplicate node.
*/
