import javax.swing.*;
import java.awt.*;

public class MyJTabbedPane {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Custom JTabbedPane");
        frame.setLayout(new GridLayout(1,1));
        frame.setSize(600,400);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);

        JPanel mainPanel = new JPanel(new GridLayout(1,1));
        JTabbedPane tabbedPane = new JTabbedPane(SwingConstants.LEFT);

        JPanel panel1 = new JPanel();
        panel1.add(new JLabel("Student Panel"));
        JPanel panel2 = new JPanel();
        panel2.add(new JLabel("Teacher Panel"));
        JPanel panel3 = new JPanel();
        panel3.add(new JLabel("Book Panel"));

        tabbedPane.add(panel1);
        tabbedPane.add("Teacher", panel2);
        tabbedPane.add("Book", panel3);
        
        tabbedPane.setIconAt(0, new ImageIcon("C:\\icon\\student.png"));
        tabbedPane.setIconAt(1, new ImageIcon("C:\\icon\\teacher.png"));
        tabbedPane.setIconAt(2, new ImageIcon("C:\\icon\\open-book.png"));

        tabbedPane.setBackground(Color.WHITE);
        mainPanel.add(tabbedPane);
        mainPanel.setBackground(Color.yellow);
        frame.add(mainPanel);
    }
}
