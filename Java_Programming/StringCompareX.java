class StringCompareX
{
    public static void main(String A[])
    {
        String S1 = "Ganesh";
        String S2 = new String("Ganesh");

        if(S1.equals(S2))                                    //It compares the data
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}