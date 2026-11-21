class ThisSuperXX
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

    public Base()
    {
        System.out.println("Inside Base constrcutor");
        this.i = 11;
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int i;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.i = 21;
    }

    public void gun()
    {
        System.out.println("Inside gun of Derived");
        System.out.println("Value of i : "+i);
        System.out.println("Value of i from Base :"+super.i);
    }
}