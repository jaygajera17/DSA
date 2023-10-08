class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      if(letters[0]> target) return letters[0];
      else if(target>=letters[letters.size()-1]) return letters[0];

        int n=letters.size();
        int low=0;
        int high=n-1;
        char ans;
        while(low<=high)
        {
            int mid=(low+high)/2;

            //if(letters[mid]==target) { return letters[mid];}
            if(letters[mid]>target) 
            { 
                 high=mid-1;
                ans=letters[mid];
             }
            else { 
                low=mid+1;
             }
        }
        return ans;



    }
};