class Animal {

    void sound() {
        System.out.println("Every animal has its own sound");
    }
}

class Dog extends Animal {
    
    @Override
    void sound() {
        System.out.println("Dog Barks");
    }
}

class Cat extends Animal {

    @Override
    void sound() {
        System.out.println("Cat Mewo");
    }
}
public class override {
    public static void main(String[] args) {
        Dog d = new Dog();
        Cat c = new Cat();

        d.sound();
        c.sound();
    }
}
