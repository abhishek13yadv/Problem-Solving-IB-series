vector<int> Solution::maxset(vector<int> &A) {
    long sum = -1,sum_seg = 0;
    int start = 0,end = 0;
    vector<int>arr_main;
    vector<int>arr_seg;
    for (int i = 0; i < A.size(); i++){
        if (A[i] >= 0){
            arr_seg.push_back(A[i]);

            sum_seg += A[i];
            
            if (sum_seg > sum){
                arr_main = arr_seg;
                sum = sum_seg;
            }
            else if (sum_seg == sum){
                if (arr_seg.size() > arr_main.size()){
                    arr_main = arr_seg;
                }
            }            
        }
        else {
            arr_seg.clear();
            sum_seg = 0;
        }

    }
    return  arr_main;
}
