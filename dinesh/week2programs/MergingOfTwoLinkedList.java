import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class MergingOfTwoLinkedList {
	public static Scanner input = new Scanner(System.in);
	
	public static List<Integer> insertIntoList(){
		List<Integer> li = new LinkedList<Integer>();
		
		while(true){
			System.out.print("1 to continue insertion 0 to stop list\nchoice: ");
			
			if(input.nextInt()==0)
				break;
			else{
				System.out.print("Enter number:");
				li.add(input.nextInt());
			}
			
		}
		return li;
	}
	public static int intersectionOfTwoList(List<Integer> listOne,List<Integer> listTwo,int indexOne,int indexTwo){
		
		if(listOne.size()==indexOne || listTwo.size()==indexTwo)
			return -1;
		else{
			
			if(listOne.get(indexOne)<listTwo.get(indexTwo))
				return intersectionOfTwoList(listOne,listTwo,indexOne+1,indexTwo);
			
			if(listOne.get(indexOne)<listTwo.get(indexTwo))
				return intersectionOfTwoList(listOne,listTwo,indexOne,indexTwo+1);
			
			int result = listOne.get(indexOne);
			return result;			
		}		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub'
		try{
			List<Integer> listOne = new LinkedList<Integer>();
			List<Integer> listTwo = new LinkedList<Integer>();
			
			System.out.println("Enter elements of list one");
			listOne = insertIntoList();
			System.out.println("List One:"+listOne);
			
			System.out.println("Enter elements of list two");
			listTwo = insertIntoList();
			System.out.println("List Two:"+listTwo+"\n\n\n");
			
			System.out.println("List One:"+listOne);
			System.out.println("List Two:"+listTwo);
			
			int result =intersectionOfTwoList(listOne,listTwo,0,0);
			
			if(result!=-1)
				System.out.println("Intersection of two list:"+result);
			else
				System.out.println("No Intersection point exits");
			
		}catch(Exception e){
			System.out.println(e);
		}
 	}
		
}
