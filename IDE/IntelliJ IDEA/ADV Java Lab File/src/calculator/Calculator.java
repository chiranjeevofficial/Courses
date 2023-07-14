package calculator;

import javax.swing.*;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;
import java.awt.*;
import java.awt.event.*;

public class Calculator implements ActionListener, DocumentListener {
    JFrame frame;
    JPanel screenPanel, digitPanel;
    JButton[] digitJButtons = new JButton[20];
    JTextField[] inputTextFields;
    int height = 500, width = 300;
    String firstNum, secondNum, result;
    char sign;
    String[] digitString = {
            "CE", "%", "/", "<-",
            "7", "8", "9", "x",
            "4", "5", "6", "-",
            "1", "2", "3", "+",
            "+/-", "0", ".", "="
    };

    public Calculator() {
        setMainFrame();
        initScreenPanel();
        initFunctionPanel();
        frame.revalidate();
        frame.repaint();
    }

    public void setMainFrame() {
        frame = new JFrame("Calculator");
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setSize(width+16,height);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
    }

    public void initDigitButtons() {
        for (int i = 0; i < digitJButtons.length; i++) {
            digitJButtons[i] = new JButton(digitString[i]);
            digitJButtons[i].setFont(new Font("Arial",Font.BOLD,20));
            digitJButtons[i].setFocusable(false);
            digitJButtons[i].addActionListener(this);
            digitPanel.add(digitJButtons[i]);
        }
    }

    public void initScreenPanel() {
        screenPanel = new JPanel();
        screenPanel.setLayout(new BoxLayout(screenPanel,BoxLayout.Y_AXIS));
        screenPanel.setBounds(0,0,width,height-300-40);
        screenPanel.setBackground(Color.BLUE);
        screenPanel.setOpaque(true);
        frame.add(screenPanel);
        JPanel[] innerScreenPanel = new JPanel[2];
        inputTextFields = new JTextField[2];
        for (int i = 0; i < inputTextFields.length; i++) {
            innerScreenPanel[i] = new JPanel(new GridLayout(1,1));
            inputTextFields[i] = new JTextField(50);
            inputTextFields[i].setFont(new Font("Calibri",Font.BOLD,25));
            inputTextFields[i].setHorizontalAlignment(SwingConstants.RIGHT);
            inputTextFields[i].setEditable(false);
            inputTextFields[i].setFocusable(false);
            inputTextFields[i].getDocument().addDocumentListener(this);
            innerScreenPanel[i].add(inputTextFields[i]);
            screenPanel.add(innerScreenPanel[i]);
        }
        inputTextFields[0].setPreferredSize(new Dimension(300, 40));
        inputTextFields[1].setPreferredSize(new Dimension(300, 120));
    }

    public void initFunctionPanel() {
        digitPanel = new JPanel(new GridLayout(5,4));
        initDigitButtons();
        digitPanel.setBounds(0,160,width,height-200);
        digitPanel.setBackground(Color.RED);
        digitPanel.setOpaque(true);
        frame.add(digitPanel);
    }

    public static void main(String[] args) {
        new Calculator();
    }

    public void updateButton() {
        if (inputTextFields[0].getText().isEmpty() && inputTextFields[1].getText().isEmpty())
            digitJButtons[0].setText("CE");
        else if (inputTextFields[0].getText().isEmpty() && !inputTextFields[1].getText().isEmpty())
            digitJButtons[0].setText("CE");
        else if (!inputTextFields[0].getText().isEmpty() && inputTextFields[1].getText().isEmpty())
            digitJButtons[0].setText("C");
        else if (!inputTextFields[0].getText().isEmpty() && !inputTextFields[1].getText().isEmpty())
            digitJButtons[0].setText("CE");
    }

    public int countOccurrences(String text, char target) {
        int count = 0;
        for (int i = 0 ; i < text.length() ; i++) {
            if (text.charAt(i) == target)
                count++;
        }
        return count;
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        for (int i = 0 ; i < 20 ; i++) {
            if(e.getSource() == digitJButtons[i]) {
                if (digitJButtons[i].getText().matches("[0-9]"))
                    inputTextFields[1].setText(inputTextFields[1].getText().concat(digitString[i]));

                if (e.getSource() == digitJButtons[0]) {
                    if (digitJButtons[0].getText().equals("C")) {
                        inputTextFields[0].setText("");
                    } else {
                        inputTextFields[1].setText("");
                    }
                }

                if(inputTextFields[1].getText().isEmpty() && !inputTextFields[0].getText().isEmpty()) {
                    if (digitJButtons[i].getText().matches("[+\\-x/]")) {
                        sign = digitJButtons[i].getText().charAt(0);
                        inputTextFields[0].setText(result+" "+sign);
                    }
                }


                if (!inputTextFields[1].getText().isEmpty()) { //when inputTextFiled[1] is non-empty
                    if (digitJButtons[i].getText().equals("+/-")) { //negative button
                        if (!String.valueOf(inputTextFields[1].getText().charAt(0)).equals("-"))
                            inputTextFields[1].setText("-" + inputTextFields[1].getText());
                        else
                            inputTextFields[1].setText(inputTextFields[1].getText().substring(1));
                    }

                    if (digitJButtons[i].getText().matches("[+\\-x/]")) {
                        if (inputTextFields[0].getText().isEmpty()) {
                                sign = digitJButtons[i].getText().charAt(0);
                                firstNum = inputTextFields[1].getText();
                                inputTextFields[0].setText(firstNum + " " + sign);
                                inputTextFields[1].setText("");
                        } else {
                            secondNum = inputTextFields[1].getText();
                            switch (sign) {
                                case '+' -> {
                                    result = String.valueOf(Integer.parseInt(firstNum) + Integer.parseInt(secondNum));
                                    firstNum = result;
                                    sign = digitJButtons[i].getText().charAt(0);
                                    inputTextFields[0].setText(result + " " + sign);
                                    inputTextFields[1].setText("");
                                }

                                case '-' -> {
                                    result = String.valueOf(Integer.parseInt(firstNum) - Integer.parseInt(secondNum));
                                    firstNum = result;
                                    sign = digitJButtons[i].getText().charAt(0);
                                    inputTextFields[0].setText(result + " " + sign);
                                    inputTextFields[1].setText("");
                                }

                                case 'x' -> {
                                    result = String.valueOf(Integer.parseInt(firstNum) * Integer.parseInt(secondNum));
                                    firstNum = result;
                                    sign = digitJButtons[i].getText().charAt(0);
                                    inputTextFields[0].setText(result + " " + sign);
                                    inputTextFields[1].setText("");
                                }

                                default -> System.out.println("Unhandled Case " + sign);
                            }
                        }
                    }
                }
            }
        }
    }

    @Override
    public void insertUpdate(DocumentEvent e) {
        updateButton();
    }

    @Override
    public void removeUpdate(DocumentEvent e) {
        updateButton();
    }

    @Override
    public void changedUpdate(DocumentEvent e) {
        updateButton();
    }
}
