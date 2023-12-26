public class A5q10 {
	public static String
	baseConversion(String number, int sBase, int dBase)
	{
		return Integer.toString(
			Integer.parseInt(number, sBase), dBase);
	}
	public static void main(String[] args)
	{
		String number = "555";
		int sBase = 8;
		int dBase = 10;
		System.out.println(
			"Octal to Decimal: "
			+ baseConversion(number, sBase, dBase));
		dBase = 16;
		System.out.println(
			"Octal to Hex: "
			+ baseConversion(number, sBase, dBase));
	}
}
