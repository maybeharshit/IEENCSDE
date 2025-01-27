//136. Single Number

int singleNumber(int* nums, int numsSize) {
    int temp = 0;
    for(int i = 0;i<numsSize;i++){
        temp = nums[i] ^ temp;
    }
    return temp;
}
