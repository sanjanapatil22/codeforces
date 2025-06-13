//1593A - Elections

import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();

        while (t-- > 0) {
            long a = in.nextLong();
            long b = in.nextLong();
            long c = in.nextLong();

            long mx = Math.max(a, Math.max(b, c));
            long x, y, z;

            if (a == mx && b == mx && c == mx) {
                x = 1;
                y = 1;
                z = 1;
            } else if (a == mx && b == mx) {
                x = 1;
                y = 1;
                z = mx - c + 1;
            } else if (b == mx && c == mx) {
                y = 1;
                z = 1;
                x = mx - a + 1;
            } else if (a == mx && c == mx) {
                x = 1;
                z = 1;
                y = mx - b + 1;
            } else if (a == mx) {
                x = 0;
                y = mx - b + 1;
                z = mx - c + 1;
            } else if (b == mx) {
                y = 0;
                x = mx - a + 1;
                z = mx - c + 1;
            } else { // c == mx
                z = 0;
                x = mx - a + 1;
                y = mx - b + 1;
            }

            System.out.println(x + " " + y + " " + z);
        }

        in.close();
    }
}
