public class A5q23 {
    public static void main(String arg[])
    {
        int iNum = 30;
        double fNum = 4.56789;
        String s = "91";
        String sample = String.valueOf(iNum);
        System.out.println(sample);
        System.out.println(sample + s);
        sample = String.valueOf(fNum);
        System.out.println(sample);
        System.out.println(s + sample);
    }
}