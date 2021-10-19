import java.util.*;

// Leetcode_94
public class Main {
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public class Solution {
        public List<Integer> inorderTraversal(TreeNode root) {
            if (root == null)
                return new ArrayList<>();

            List<Integer> myAns = new ArrayList<>();

            List<Integer> left = inorderTraversal(root.left);
            for (int ele : left)
                myAns.add(ele);

            myAns.add(root.val);

            List<Integer> right = inorderTraversal(root.right);
            for (int ele : right)
                myAns.add(ele);
            return myAns;
        }
    }
}
