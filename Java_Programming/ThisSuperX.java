class ThisSuperX
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();

        dobj.gun();
    }
}

class Base
{
    public int i;
    public int j;

    public Base()
    {
        System.out.println("Inside Base constrcutor");
        this.i = 11;
        this.j = 21;
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int x;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.x = 51;
    }

    public void gun()
    {
        System.out.println("Inside gun of Derived");
        System.out.println("Value of i : "+i);
        System.out.println("Value of j : "+j);
        System.out.println("Value of x : "+x);
    }
}