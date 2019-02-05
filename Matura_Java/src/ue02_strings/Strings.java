package ue02_strings;

/**
 *
 * @author emil
 */
public class Strings {

    public static int calcMinimum(String m) throws Exception {
        if (m == null) {
            throw new NullPointerException(); // oder IllegalArgumnet Exception
        }
        String[] s = m.split("\t");
        if (s.length == 0) {
            throw new Exception();
        }
        int min = Integer.parseInt(s[0]);
        for (String x : s) {
            int v = Integer.parseInt(x);
            if (v < min) {
                min = v;
            }
        }
        return min;
    }

    public static void main(String[] args) throws Exception {
        String messung = "20\t10\t100\t40";
        int min = Strings.calcMinimum(messung);
        System.out.println(String.format("Minimum = %d", min));
    }
    
}
