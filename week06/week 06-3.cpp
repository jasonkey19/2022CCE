int removeDuplicates(int* nums, int numsSize){
   //���ѱ�,���дN�O�}�C,�}�C�N�O����
    int k=1;
   for(int i=1;i<numsSize;i++){
       if(nums[i-1]==nums[i]){
           //���n����
       }else{
           nums[k]=nums[i];
           k++;
       }
   }
    return k;
}
