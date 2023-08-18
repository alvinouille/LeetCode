class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> answer;
        for (int i = 1 ; i <= n ; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                answer.push_back("FizzBuzz");
            else if (i % 5 == 0)
                answer.push_back("Buzz");
            else if (i % 3 == 0)
                answer.push_back("Fizz");
            else
                answer.push_back(std::to_string(i));
        }
        return answer;
    }
};