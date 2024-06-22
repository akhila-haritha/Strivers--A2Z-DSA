class Solution{
    public:  
    //Complete this function
    int i=1;
    void printNos(int N)
    {
        if(i>N)return;
        cout<<i++<<" ";
        printNos(N);
        //Your code here
    }
};
