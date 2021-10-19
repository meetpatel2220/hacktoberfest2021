public class Leetcode_148 {
    public class ListNode {
        int val;
        ListNode next;

        ListNode() {
        }

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }

    class Solution {

        public ListNode mid(ListNode head) {
            if (head == null || head.next == null)
                return head;
            ListNode slow = head, fast = head;

            while (fast.next != null && fast.next.next != null) {
                fast = fast.next.next;
                slow = slow.next;
            }
            return slow;
        }

        public ListNode mergeTwoList(ListNode l1, ListNode l2) {
            if (l1 == null || l2 == null)
                return l1 == null ? l2 : l1;

            ListNode dummy = new ListNode(-1);
            ListNode prev = dummy;

            ListNode c1 = l1, c2 = l2;
            while (c1 != null && c2 != null) {
                if (c1.val <= c2.val) {
                    prev.next = c1;
                    c1 = c1.next;
                } else {
                    prev.next = c2;
                    c2 = c2.next;
                }
                prev = prev.next;
            }
            prev.next = c1 != null ? c1 : c2;
            return dummy.next;
        }

        public ListNode sortList(ListNode head) {
            if (head == null || head.next == null)
                return head;

            ListNode mid = mid(head);
            ListNode nhead = mid.next;
            mid.next = null;

            ListNode left = sortList(head);
            ListNode right = sortList(nhead);

            return mergeTwoList(left, right);
        }
    }
}
