
public class BinarySearchTree {
	private Node root;
	private int array[];
	public BinarySearchTree(int[] array) {
		super();
		this.array = array;
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
		System.out.println("Node:"+r.getElement()+" k:"+k);
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
}
