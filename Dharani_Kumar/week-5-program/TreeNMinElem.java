import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

public class TreeNMinElem {
	private static Scanner read;
	public static void main(String args[]) {
		TreeSet<Integer> ts = new TreeSet<Integer>();
		read = new Scanner (System.in);
		int elemCount;
		elemCount=read.nextInt();
		while(elemCount!=0){
			elemCount--;
			ts.add(read.nextInt());
		}
		elemCount=read.nextInt();
	    Iterator<Integer> it = ts.iterator();  
	    while (it.hasNext()) { 
	    	elemCount--;
	    	int key=it.next();
	    	if(elemCount==0)
	    		System.out.println(key);  
	    }  
	}
}
