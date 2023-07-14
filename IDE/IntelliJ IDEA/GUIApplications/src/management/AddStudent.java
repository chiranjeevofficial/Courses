package management;
import javax.swing.*;
import java.awt.*;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;

public class AddStudent implements FocusListener {
    JFrame mainFrame = new JFrame("Add Student");
    JPanel mainPanel = new JPanel(null);
    JLabel[] studentFormLabel;
    JTextField[] studentFormTextField;

    public AddStudent() {
        studentFormLabel = new JLabel[5];
        studentFormTextField = new JTextField[5];

        int y = 10;
        for (int i = 0; i < 5; i++) {
            studentFormLabel[i] = new JLabel();
            studentFormLabel[i].setBounds(10, y, 100, 30);
            studentFormLabel[i].setFont(new Font("Microsoft Sans Serif",Font.PLAIN,13));
            mainPanel.add(studentFormLabel[i]);
            studentFormTextField[i] = new JTextField(50);
            studentFormTextField[i].setBounds(110, y, 200, 30);
            mainPanel.add(studentFormTextField[i]);
            y += 40;
        }

        System.out.println(studentFormLabel[0].getHeight());

        studentFormLabel[0].setText("Student Name : ");
        studentFormLabel[1].setText("Father Name  : ");
        studentFormLabel[2].setText("Phone Number : ");
        studentFormLabel[3].setText("Age          : ");
        studentFormLabel[4].setText("Course Name  : ");

        mainFrame.setSize(400, 400);
        mainFrame.setVisible(true);
        mainFrame.setLocationRelativeTo(null);
        mainFrame.setDefaultCloseOperation(mainFrame.EXIT_ON_CLOSE);
        mainFrame.setContentPane(mainPanel);
    }

    @Override
    public void focusGained(FocusEvent e) {
    }

    @Override
    public void focusLost(FocusEvent e) {
    }

    public static void main(String[] args) {
        new AddStudent();
    }
}