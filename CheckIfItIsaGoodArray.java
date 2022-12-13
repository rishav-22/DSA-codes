import java.util.Arrays;

public class CheckIfItIsaGoodArray {
    public static void main(String[] args) {
        // int[] nums = {1,2,3,4};
        int[] nums = {-1,1,0,-3,3};
        System.out.println(Arrays.toString(productExceptSelf(nums)));
    }
    static int[] productExceptSelf(int[] nums) {
        int[] result = new int[nums.length];
        for(int i=0;i<nums.length;i+=1){
            int danger = i;
            int f=1;
            for(int j=0;j<nums.length;j+=1){
                if(danger==j) continue;
                else f*=nums[j];
            }
            result[i]=f;
        }
        return result;
    }
    
}
