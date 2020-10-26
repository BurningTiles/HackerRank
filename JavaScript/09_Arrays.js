/**
 * Author  : BurninTiles
 * Created : 2020-10-26 23:55:02
 * Link    : GitHub.com/BurninTiles
**/

function getSecondLargest(nums) {
	let max=-1, secondMax=-1;

	for(let i=0; i<nums.length; i++)
		if(nums[i]>max){
			secondMax = max;
			max = nums[i];
		}
		else if(nums[i]>secondMax && nums[i]<max)
			secondMax = nums[i];
	
	return secondMax;
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-arrays/problem

**/