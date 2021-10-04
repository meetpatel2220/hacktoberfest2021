class Main
{
 public static void main(String args[])
 {
  String str="pqrs adas faFs ";
 String ans="";
 int currentStart=0;
 int i=0;
 for(i=0;i<str.length();i++)
 {
   
     if(str.charAt(i)==' ')
     {
          int currentEnd=i-1;
           String reverse="";
         for(int j=currentStart;j<=currentEnd;j++)
         {
             reverse=str.charAt(j)+reverse;
         }
         currentStart=i+1;
         ans+=reverse+" ";
         
     }
 }
 System.out.println(ans);
 
  
 }
}
