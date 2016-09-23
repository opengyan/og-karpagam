import java.util.Comparator;

public class PriorityComparator implements Comparator<Node>{

	@Override
	public int compare(Node arg0, Node arg1) {
		// TODO Auto-generated method stub
		if(arg0.getPriority()<arg1.getPriority())
			return -1;
		else
			return 1;
	}

}
