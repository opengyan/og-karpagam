
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt(),i,firstIndex=0,lastIndex=0,maxIndex=0,start=0;
        int array[]=new int[n];
       List<Integer> list = new ArrayList<>();
		for(i=0;i<n;i++){
		array[i]=scan.nextInt();}
			for(i=0;i<n;i++){
                if((array[i]<0)&&(maxIndex<=i-firstIndex)){
                    if(maxIndex!=0)
                    start=i;
                    maxIndex=i-firstIndex;
                    firstIndex=i;
                   }
                    else if((array[i]>0)&&(maxIndex<i-firstIndex)){
                        lastIndex=i; 
                        
                    }
            }
                i--;
       
            if((array[i]>0)&&maxIndex<i-firstIndex){
                start=firstIndex; maxIndex=i-firstIndex;}
        for(start=start+1,i=0;start<=lastIndex;start++){
             list.add(array[start]);i++;
        }
        
        System.out.println(list);
	}
}
