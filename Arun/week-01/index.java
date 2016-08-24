import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i,j;
        int arr[] = new int[n];
        int brr[] = new int[n];
        for(i=0;i<n;i++){
            arr[i] = in.nextInt();
               brr[i] = in.nextInt();
        }
      for(i=0;i<n;i++)
          {
          for(j=0;j<n;j++)
              {
              if(arr[i]<arr[j]&&arr[j]<brr[i])
                  {
                  brr[i]=brr[j];
                 arr[j]=brr[j]=0;
              }
          }
      }
      
         for(i=0;i<n;i++)
         if(arr[i]!=0){
          System.out.println(arr[i]+" "+brr[i]);
    //      System.out.println(brr[i]);
    }
    }
}
