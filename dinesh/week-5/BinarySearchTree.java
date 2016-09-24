import java.util.LinkedList;
import java.util.Queue;

public class BinarySearchTree {
	private Node root;
	public BinarySearchTree(int[] array) {
		super();
		for(int val:array){
			root = insert(root,val);
		}
	}
	private Node insert(Node r ,int val) {
		// TODO Auto-generated method stub
		if(r==null)
			return new Node(val);
		else if(r.getElement()>val)
			r.setLeft( insert(r.getLeft(),val ) );
		else
			r.setRight( insert(r.getRight(),val) );
		return r;
	}
	public void inorder(){
		inorder(root);
	}
	private void inorder(Node r){
		if(r!=null){
			inorder(r.getLeft());
			System.out.println(r.getElement());
			inorder(r.getRight());
		}
	}
	
	public int getKthSmallest(int k){
		return getKthSmallest(root,k);
	}
	private int getKthSmallest(Node r,int k){
		if(r==null)
			return -1;
		int leftNodes= countNodes(r.getLeft());
		if(k == leftNodes+1)
			return r.getElement();
		else if(leftNodes < k)
			return getKthSmallest(r.getRight(),k-leftNodes-1);
		else
			return getKthSmallest(r.getLeft(),k);			
	}
	private int countNodes(Node r){
		if(r==null)
			return 0;
		else
			return countNodes(r.getLeft()) + countNodes(r.getRight()) +1 ;
	}
	
	public void breadthFirst(){
		breadthFirst(root);
	}
	private void breadthFirst(Node r){
		Queue<Node> queue = new LinkedList<Node>();
		if(r==null)
			return ;
		queue.clear();
		queue.add(root);
		while(!queue.isEmpty()){
			Node node = queue.remove();
			System.out.print(node.getElement()+" ");
			if(node.getLeft()!=null)
				queue.add(node.getLeft());
			if(node.getRight()!=null)
				queue.add(node.getRight());
		}
	}
}
