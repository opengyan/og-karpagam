
public class Node {
	private int element;
	private Node left;
	private Node right;
	public Node(int element, Node left, Node right) {
		super();
		this.element = element;
		this.left = left;
		this.right = right;
	}
	public Node() {
		super();
	}
	public Node(int val) {
		// TODO Auto-generated constructor stub
		this.element=val;
		this.left=null;
		this.right=null;
	}
	public int getElement() {
		return element;
	}
	public void setElement(int element) {
		this.element = element;
	}
	public Node getLeft() {
		return left;
	}
	public void setLeft(Node left) {
		this.left = left;
	}
	public Node getRight() {
		return right;
	}
	public void setRight(Node right) {
		this.right = right;
	}
	
}
