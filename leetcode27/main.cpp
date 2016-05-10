#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        if(nums.size()==0){
            return 0;
        }
        vector<int>::iterator head = nums.begin();

        int i = 0, j = nums.size() - 1;
        int mid = 0;
        while(i<j||i==j){
            mid = (i + j) / 2;
            if(val==nums[mid]){
                nums.erase(head+mid);
                head = nums.begin();
                i = 0;
                j = nums.size() - 1;
            }else if(val<nums[mid]){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }

        /*
        while(head!=nums.end()){
            if(val==*head){
                head = nums.erase(head);
            }else{
                head++;
            }
        }
        */
        return nums.size();

    }
};

int main()
{
    Solution l;
    vector<int> num;
    int i = 0, len = 0;
    while(cin>>i){
        num.push_back(i);
    }
    cin.clear();
    cout<<"please input you need to delet number!"<<endl;
    cin>>i;
    len = l.removeElement(num,i);
    cout<<"the vector's new size is: "<<len<<endl;
    return 0;
}
