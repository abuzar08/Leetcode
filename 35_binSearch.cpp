int searchInsert(vector<int>& nums, int target) {

        int l = 0, r = nums.size();
        if(target<nums[0])
            return 0;
        if(target > nums[r -1 ])
            return r;
        int mid;

        while(l<=r){
            mid = (l + r)/2 ;
            if (nums[mid]==target || (nums[mid-1] < target && nums[mid] > target))
                return mid;
            else if (target<nums[mid])
                r = mid;
            else
                l = mid + 1;

        }

        return mid;

    }
