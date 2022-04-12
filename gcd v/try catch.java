class example{
    public static void main(String args[]){
        int a, b;
        try{
            a=0;
            b=100/a;
            System.out.println(b);
        }
        catch (ArithmeticException e) {
            System.out.println("You are dividing it by Zero");
        }
        catch (Exception e) {
            System.out.println("Exception occured");
        }
    }
}