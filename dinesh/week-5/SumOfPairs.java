import java.util.Scanner;

public class SumOfPairs {


	private static Scanner input;

	public static void main(String[] args) {
		input = new Scanner(System.in);
		int size;
		System.out.print("size:");
		size = input.nextInt();
		int[] array= new int[size];
		System.out.println("enter "+size+" numbers");
		for(int i=0;i<size;i++){
			array[i]=input.nextInt();
		}
		BinarySearchTree bst = new BinarySearchTree(array);
		System.out.print("Enter sum:");
		bst.findSum(input.nextInt());	
	}
}
