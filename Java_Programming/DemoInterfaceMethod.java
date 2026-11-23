interface Circle
{
    //Characteristics (By default : public static final)
    float PI = 3.14f;       

    //Behaviours (By default : public abstract)
    float Area(float Radius);    
    float Circumference(float Radius);
}

class Marvellous implements Circle
{
    // Error due to missing body of Area and Circumference
}

class DemoInterfaceMethod
{
    public static void main(String A[])
    {
       Marvellous mobj = new Marvellous();

    }
}