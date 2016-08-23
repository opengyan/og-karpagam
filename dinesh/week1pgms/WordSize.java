import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class WordSize{

    public static void main(String[] args) throws IOException {
        	long dataSets;
                BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
                dataSets= Integer.parseInt(bf.readLine());
                while(dataSets >0){
                    byte x=3;
                    long words=0,length=0,avg;
                    while(x>0){
                        String str = bf.readLine();                    
                        String w[] = str.split(" ");
                        for(String ob:w){
                           // System.out.println(ob);
                            length += ob.length();
                            words++;
                        }
                        x--;
                    }
                    avg = length/words;
                    if(avg<4)
                        System.out.println("Low");
                    else if(avg>=4 &&avg<8)
                        System.out.println("Medium");
                    else
                        System.out.println("High");
                    dataSets--;
                }
    }   
}