public class LongestPositiveSubsequence {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int array[]={1,2,-1,5,6,7,9,-2,-3,8,6,10,11};
		int startIndex =0;
		int count=0;
		int seqStart =0,maxLength=0;
		for(int index =0;index<array.length;index++){
			if(array[index]>=0){
				count++;
			}
			else{
				if(count>maxLength){
					seqStart =startIndex;
					maxLength = count;
				}
				count=0;
				startIndex =index+1;
		
			}
		}
		if(count>maxLength){
			seqStart =startIndex;
			maxLength = count;
		}
		for(int index=seqStart;index<seqStart+maxLength;index++){
			System.out.print(array[index]+" ");
		}
	}

}
