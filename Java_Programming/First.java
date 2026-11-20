class First
{
    public static void main(String A[])
    {
        Arithmetic aobj = new Arithmetic(11,10);

        int Result = 0;

        Result = aobj.Addition();
        System.out.println("Addition is :" + Result);

        Result = aobj.Subtraction();
        System.out.println("Subtraction is :" + Result);
    }
}

class Arithmetic
{
    public int No1, No2;

    public Arithmetic()
    {
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmetic(int Value1, int Value2)
    {
        this.No1 = Value1;
        this.No2 = Value2;
    }

    public int Addition()
    {
        int Ans;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Subtraction()
    {
        int Ans;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}