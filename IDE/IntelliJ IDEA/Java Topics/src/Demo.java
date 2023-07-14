interface Computer {
    void code();
}

class Laptop implements Computer {
    public void code() {
        System.out.println("Code, Compile & Run");
    }
}

class Desktop implements Computer {
    public void code() {
        System.out.println("Code, Compile & Run : Desktop");
    }
}

class Developer {
    public void devApp(Computer computer) {
        computer.code();
    }
}

public class Demo {
    public static void main(String[] args) {
        Computer lap = new Laptop();
        Developer narayan = new Developer();
        narayan.devApp(lap);
    }
}