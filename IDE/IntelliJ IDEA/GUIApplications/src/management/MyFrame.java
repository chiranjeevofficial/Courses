package management;

import javax.swing.*;

public class MyFrame {
    public MyFrame() {
        JFrame mainFrame = new JFrame("Testing Frame");
        JPanel mainPanel = new JPanel(null);
        JTextField textField = new JTextField(20);
        textField.putClientProperty("JComponent.setToolTipText", "This is a tooltip");
        textField.setBounds(10,10,200,30);
        mainPanel.add(textField);
        mainFrame.setContentPane(mainPanel);
        mainFrame.setSize(300,300);
        mainFrame.setVisible(true);
        mainFrame.setLocationRelativeTo(null);
        mainFrame.setDefaultCloseOperation(mainFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new MyFrame();
    }
}