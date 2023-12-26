public class psThree {
    public static void main(String[] args){
        String s1="The Book is On the Table",upp="",main="";
        for(int i=0;i<s1.length();i++)
        {
            char x=s1.charAt(i);
            if(Character.isUpperCase(x))
            {
                upp=upp+x;
            }
        }
        main=main+upp;
        for(int i=0;i<s1.length();i++)
        {
            char x=s1.charAt(i);
            if(!Character.isUpperCase(x))
            {
                main=main+x;
            }
        }
        System.out.println(main);
    }
}