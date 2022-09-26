#include<iostream>
using namespace std;
class Solution {
private:
    int num1;
    int num2;
public:
    void numIn(){
      cout<<"Enter two numbers:"<<endl;
      cin>>this->num1;
      cin>>this->num2;
    }
    int sum() {
        return this->num1+this->num2;
    }
};

int main(){
    Solution s1;
    int add;
    s1.numIn();
    add = s1.sum();
    cout<<"The sum is: "<<add<<endl;
    return 0;
}