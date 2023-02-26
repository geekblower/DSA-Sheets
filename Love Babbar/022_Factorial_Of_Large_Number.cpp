/*
  Platform : GeeksForGeeks
  Problem : https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
*/

class Solution {
  public:
      vector<int> factorial(int N){
          vector<int> fact;
          fact.push_back (1);

          for(int i=2; i<=N; i++) {
              int carry = 0;

              // Multiplying the number stored in form of vector with i
              for(int j=0; j<fact.size(); j++) {
                  int pdt = (fact[j] * i) + carry;

                  // Storing the product in vector
                  fact[j] = pdt % 10;
                  carry = pdt / 10;
              }

              // Storing carry values
              while(carry != 0) {
                  fact.push_back (carry%10);
                  carry /= 10;
              }
          }

          // Reversing the vector as we have stored digits in opposite order
          reverse(fact.begin(), fact.end());

          return fact;
      }
};
