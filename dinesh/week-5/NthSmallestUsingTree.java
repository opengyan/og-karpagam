import java.util.Arrays;
import java.util.Scanner;

public class NthSmallestUsingTree {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int size;
		System.out.print("size:");
		size = input.nextInt();
		int[] array= new int[size];
		System.out.println("enter "+size+" numbers");
		for(int i=0;i<size;i++){
			array[i]=input.nextInt();
		}
		BinarySearchTree bst = new BinarySearchTree(array);
		System.out.print("Enter k value:");
		int result = bst.getKthSmallest(input.nextInt());
		if(result !=-1)
			System.out.println("Kth smallest value:"+result);
		else
			System.out.println("No such kth position exists");
	}

}
