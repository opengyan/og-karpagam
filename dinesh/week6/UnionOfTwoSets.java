import java.util.Set;
import java.util.TreeSet;

public class UnionOfTwoSets {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Set<Integer> setOne = new TreeSet<Integer>();
		Set<Integer> setTwo = new TreeSet<Integer>();	
		setOne.add(5);
		setOne.add(4);
		setOne.add(3);
		setTwo.add(5);
		setTwo.add(6);
		setTwo.add(7);
		setTwo.add(8);
		Set<Integer> setUnion = new TreeSet<Integer>(setOne);
		setUnion.addAll(setTwo);
		System.out.println("Set One :"+setOne);
		System.out.println("Set Two :"+setTwo);
		System.out.println("Union of Sets :"+setUnion);
	}

}
