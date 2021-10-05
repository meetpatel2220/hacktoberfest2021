public class Solution {

	public static LinkedListNode<Integer> removeDuplicates(LinkedListNode<Integer> head) {
		
        LinkedListNode<Integer>curr=head;
    	while(curr!=null && curr.next!=null)
        {
            if(curr.next.data.equals(curr.data))
                curr.next=curr.next.next;
            else{
                curr=curr.next;
            }
        }
       
        return head;
	}

}
