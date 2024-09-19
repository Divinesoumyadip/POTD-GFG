// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        int highest=height[0];
        int count = 1;
        for(int i=1;i<height.size();i++)
        {
            if(height[i]>highest)
            {
                count++;
                highest=height[i];
            }
        }
        return count;
    }
};
