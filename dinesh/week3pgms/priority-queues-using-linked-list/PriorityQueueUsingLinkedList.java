import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class PriorityQueueUsingLinkedList {
	static Scanner input = new Scanner(System.in);
	private static List<Node> insertElements(){
		List<Node> li = new LinkedList<Node>();
		while(true){
			System.out.println("1 to insert 0 to end insertion\nyour choice:");
			if(input.nextInt()==0)
				break;
			Node node = new Node();
			System.out.print("Element:");
			node.setElement(input.nextInt());
			System.out.print("priority:");
			node.setPriority(input.nextInt());
			li.add(node);
		}
		return li;
	}
	public static void main(String[] args) {
		List<Node> li = insertElements();
		li.sort(new PriorityComparator());
		System.out.println("Element\tPriority");
		for(Node obj:li){
			System.out.println(obj.getElement()+"\t"+obj.getPriority());
		}
	}

}
