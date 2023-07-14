package calculator;

import javax.swing.*;

public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Example Demonstration");
        JTextField textField = new JTextField();
        textField.setBounds(0,0,300,40);
        frame.add(textField);
        frame.setLayout(null);
        frame.setSize(300, 300);
        frame.setVisible(true);
        frame.setResizable(false);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
    }
}
