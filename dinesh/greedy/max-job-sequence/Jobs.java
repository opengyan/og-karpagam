
public class Jobs {
	private String jobId;
	private int deadLine;
	private int profit;
	public Jobs(String jobId, int deadLine, int profit) {
		super();
		this.jobId = jobId;
		this.deadLine = deadLine;
		this.profit = profit;
	}
	public Jobs() {
		super();
	}
	public String getJobId() {
		return jobId;
	}
	public void setJobId(String jobId) {
		this.jobId = jobId;
	}
	public int getDeadLine() {
		return deadLine;
	}
	public void setDeadLine(int deadLine) {
		this.deadLine = deadLine;
	}
	public int getProfit() {
		return profit;
	}
	public void setProfit(int profit) {
		this.profit = profit;
	}
	
}
