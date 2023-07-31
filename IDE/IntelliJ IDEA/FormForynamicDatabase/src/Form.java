import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Arrays;

public class Form implements ActionListener {
    private JFrame frame;
    private JPanel mainPanel;
    private JButton submit;
    private Connection con;
    private JTextField platformTextField;
    private JTextField username;
    private JPasswordField passwordTextField;

    public Form() {
        try {
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/" + "myaccount", "root", "admin@2023");
        } catch(SQLException e) {
            System.out.println(e.getMessage());
        }
        getFrame();
        setMainPanel(new GridLayout(5,1));
        initComponents("Credential Protector");
        frame.revalidate();
        frame.repaint();
    }

    public void initComponents(String title) {
        JPanel[] innerPanel = new JPanel[5];
        for (int i = 0 ; i <innerPanel.length ; i++) {
            innerPanel[i] = new JPanel(new GridLayout(1,1));
            mainPanel.add(innerPanel[i]);
        }
        innerPanel[0].setBackground(Color.RED);
        innerPanel[1].setBackground(Color.GREEN);
        innerPanel[2].setBackground(Color.BLUE);
        innerPanel[3].setBackground(Color.YELLOW);
        innerPanel[4].setBackground(Color.ORANGE);
        JLabel formTitle = new JLabel(title);
        formTitle.setHorizontalAlignment(JLabel.CENTER);
        innerPanel[0].add(formTitle);

        JLabel platformName = new JLabel("Platform Name");
        platformName.setHorizontalAlignment(JLabel.CENTER);
        innerPanel[1].add(platformName);

        platformTextField = new JTextField();
        platformTextField.setHorizontalAlignment(JTextField.CENTER);
        innerPanel[1].add(platformTextField);

        JLabel usernameLabel = new JLabel("Username");
        usernameLabel.setHorizontalAlignment(JLabel.CENTER);
        innerPanel[2].add(usernameLabel);

        username = new JTextField();
        username.setHorizontalAlignment(JTextField.CENTER);
        innerPanel[2].add(username);

        JLabel password = new JLabel("Password");
        password.setHorizontalAlignment(JLabel.CENTER);
        innerPanel[3].add(password);

        passwordTextField = new JPasswordField();
        passwordTextField.setHorizontalAlignment(JTextField.CENTER);
        innerPanel[3].add(passwordTextField);

        submit = new JButton("Submit");
        submit.addActionListener(this);
        innerPanel[4].add(submit);
    }

    public void setMainPanel(GridLayout gridLayout) {
        mainPanel = new JPanel(gridLayout);
        mainPanel.setBackground(Color.WHITE);
        frame.add(mainPanel);
    }

    public void getFrame() {
        frame = new JFrame("Dynamic Form");
        frame.setSize(400,400);
        frame.setVisible(true);
        frame.setLayout(new GridLayout(1,1));
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new Form();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == submit) {
            try {
                PreparedStatement prestmt = con.prepareStatement("INSERT into account (platform, username, password) values (?, ?, ?)");
                prestmt.setString(1,platformTextField.getText());
                prestmt.setString(2,username.getText());
                prestmt.setString(3, Arrays.toString(passwordTextField.getPassword()));
                System.out.println(prestmt.executeUpdate());
            } catch (SQLException ex) {
                System.out.println(ex.getMessage());
            }
        }
    }
}
