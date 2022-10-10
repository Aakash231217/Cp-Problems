import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while(T>0){
            int A = sc.nextInt();
            int B = sc.nextInt();
            int X = sc.nextInt();
            int Y = sc.nextInt();

            double cheftime = A/X;
            double chefinatime = B/Y;
            if(cheftime==chefinatime){
                System.out.println("Both");
            }
            else if(chefinatime>cheftime){
                System.out.println("Chef");
            } else if (cheftime>chefinatime) {
                System.out.println("Chefina");
            }
            T--;
        }

    }
}