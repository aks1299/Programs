public class psTwo 
{
    public static void main(String[] args)
    {
        String s="The book is on the table.";String s1="";
        String words[]=s.split(" ");
        for(int i=0;i<words.length;i++)
        {
            String f=words[i].substring(0,1);
            String restchar = words[i].substring(1,words[i].length()-1);
            String l=words[i].substring(words[i].length()-1,words[i].length());
            s1=s1+f.toUpperCase()+restchar+l.toUpperCase()+" ";
        }
        System.out.println(s1);
    }    
}
