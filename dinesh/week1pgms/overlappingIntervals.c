import java.util.*;
import java.lang.*;
import java.io.*;
class RemoveDuplicates
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Set obj = new HashSet();
		Scanner input = new Scanner(System.in);
		int size;
		size = input.nextInt();
		while( size> 0 ){
			obj.add(input.nextInt());	
			size--;			
		}
		Iterator x;
		for(x = obj.iterator() ; x.hasNext() ; ){
			System.out.println(x.next());
		}
	}
}
