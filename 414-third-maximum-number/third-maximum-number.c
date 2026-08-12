 int compare(const void*a, const void*b){
       int x = *(const int*)a;
       int y = *(const int*)b;
            return(x>y) - (x<y);
        }
int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);{
        int elemcount=1;
        int prevElem=nums[numsSize - 1]; 
        for(int i=numsSize-2; i>=0; i--){
            if(nums[i]!=prevElem){
                elemcount +=1;
                prevElem=nums[i];
            }
            if(elemcount==3){
                return nums[i];
            }
        }
        return nums[numsSize-1];
    }
}