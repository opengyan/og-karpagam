import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class MaxProfitJobSequence {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Jobs> jobs = new LinkedList<Jobs>();
		List<String> result = new LinkedList<String>();
		while(true){
			System.out.println("1 continue 0 exit");
			if(input.nextInt()==0){
				break;
			}
			input.nextLine();
			System.out.print("job ID:");
			String jobId = input.nextLine();
			System.out.print("dead line:");
			int deadLine = input.nextInt();
			System.out.print("profit:");
			int profit = input.nextInt();
			jobs.add(new Jobs(jobId,deadLine,profit));
		}
		jobs.sort(new ProfitComparator());
		for(Jobs jb:jobs){
			if(jb.getDeadLine()>0){
				result.add(jb.getJobId());
				for(Jobs obj:jobs){
					obj.setDeadLine(obj.getDeadLine()-1);
				}
			}
		}
		System.out.println("Job Sequence:"+result);
	}

}
