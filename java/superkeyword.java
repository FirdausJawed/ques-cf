class Animal {
    String color = "Yellow";
}

class Dog extends Animal {
    String color = "black";

    void printColor() {
        System.out.println("Color of the dog is "+color);
        System.out.println("Color of the animal is "+super.color);
    }
}

class TestSuper1 {
    public static void main(String args[]) {
        Dog d = new Dog();
        d.printColor();
    }
}