import java.util.Comparator;

public class ProfitComparator implements Comparator<Jobs> {

	@Override
	public int compare(Jobs o1, Jobs o2) {
		if(o1.getProfit()<o2.getProfit())
			return 1;
		else
			return -1;
	}

}
