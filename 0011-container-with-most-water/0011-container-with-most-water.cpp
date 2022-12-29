class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int area;
        int maxarea=0;
        while(s<e)
        {
            area= min(height[s],height[e])*(e-s);
            if(area>maxarea)
            {
                maxarea=area;
                
            }
            if((min(height[s],height[e]))==height[s])
                                     {
                                         s++;
                                     }
                                     else{
                                       e--;
                                     }
        }
                                     return maxarea;
    }
};