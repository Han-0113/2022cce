int removeDuplicates(int* nums, int numsSize){
   int k=1;
   for(int i=1; i<numsSize; i++){
       if( nums[i-1]==nums[i]){
           //不要做事
       }else{
            nums[k] = nums[i];//把新數字搬左邊
            k++;
        }
   }
   return k;
}
