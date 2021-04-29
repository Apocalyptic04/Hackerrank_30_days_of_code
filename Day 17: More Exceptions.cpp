//Write your code here
class Calculator 
{
    public:
    int power(int first, int second) 
    {
        if(first < 0 || second < 0) 
        {
            throw runtime_error("n and p should be non-negative");
        }
        return pow(first, second);
    }
};
