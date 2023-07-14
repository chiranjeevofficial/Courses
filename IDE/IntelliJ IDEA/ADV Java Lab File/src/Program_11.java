import java.awt.*;
import java.sql.*;
import javax.swing.*;
import java.awt.event.*;
import javax.swing.table.DefaultTableModel;

class JDBCConnectivity implements ActionListener, MouseListener {
    Connection con;
    JFrame frame;
    JPanel panel, leftPanel, rightPanel;
    JLabel alertLabel;
    JButton[] leftButtons;
    JTextField[] leftTextFields;
    DefaultTableModel tableModel;
    JTable table;
    PreparedStatement preStmt;
    ResultSet resultSet;

    public JDBCConnectivity() {
        try {
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/employee", "root", "admin@2023");
        } catch(SQLException e) {
            System.out.println(e.getMessage());
        }
        frame = new JFrame("JDBC Demonstration using CRUD Operation");
        frame.setSize(616, 339);
        frame.setVisible(true);
        frame.setLayout(new GridLayout(1, 1));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.X_AXIS));
        initLeftPanel();
        initRightPanel();
        frame.add(panel);
        frame.revalidate();
    }

    public void initLeftPanel() {
        leftPanel = new JPanel(null);
        initLeftComponents();
        leftPanel.setBackground(Color.WHITE);
        leftPanel.setPreferredSize(new Dimension(300, frame.getHeight() - 39));
        panel.add(leftPanel);
    }

    public void initRightPanel() {
        rightPanel = new JPanel(null);
        initRightComponents();
        rightPanel.setPreferredSize(new Dimension(300, frame.getHeight()-39));
        panel.add(rightPanel);
    }

    public void initLeftComponents() {
        alertLabel = new JLabel();
        JLabel[] leftLabels = new JLabel[3];
        leftTextFields = new JTextField[3];
        leftButtons = new JButton[3];
        String[] labelString = {"Id", "Name", "Salary"};
        String[] buttonString = {"Submit", "Clear", "Update"};
        int y = 10, x = 20;
        for (int i = 0 ; i < 3 ; i++) {
            leftLabels[i] = new JLabel(labelString[i]);
            leftLabels[i].setBounds(10, y, 50, 30);
            leftPanel.add(leftLabels[i]);

            leftTextFields[i] = new JTextField(50);
            leftTextFields[i].setBounds(70, y, 200, 30);
            leftPanel.add(leftTextFields[i]);

            leftButtons[i] = new JButton(buttonString[i]);
            leftButtons[i].addActionListener(this);
            leftButtons[i].setBounds(x, 120, 80, 30);
            leftPanel.add(leftButtons[i]);
            y += 35;
            x += 85;
        }
        alertLabel.setBounds(10,leftButtons[0].getY()+50, 380, 30);
        leftPanel.add(alertLabel);
    }

    public void initRightComponents() {
        table = new JTable();
        table.addMouseListener(this);
        JScrollPane scrollPane = new JScrollPane(table);
        try {
            String query = "SELECT COUNT(*) AS count FROM staff";
            preStmt = con.prepareStatement(query);
            resultSet = preStmt.executeQuery();
            boolean isEmpty = true;
            if (resultSet.next()) {
                int count = resultSet.getInt("count");
                if (count == 0) {
                    isEmpty = false;
                }
            }
            if (isEmpty){
                preStmt = con.prepareStatement("select * from staff;");
                resultSet = preStmt.executeQuery();
                tableModel = (DefaultTableModel) table.getModel();
                String[] columnName = {"Id", "Name", "Salary"};
                tableModel.setColumnIdentifiers(columnName);
                while (resultSet.next()) {
                    Employee.id = resultSet.getInt(1);
                    Employee.name = resultSet.getString(2);
                    Employee.salary = resultSet.getDouble(3);
                    Object[] row = {
                            Employee.id,
                            Employee.name,
                            Employee.salary
                    };
                    tableModel.addRow(row);
                }
                table.setEnabled(true);
                scrollPane.setBounds(0, 0, 300, frame.getHeight()-39);
            } else {
                JLabel message = new JLabel("Table is Empty");
                message.setBounds(10,10,50,30);
                message.setForeground(Color.RED);
                rightPanel.add(message);
            }
            rightPanel.add(scrollPane);
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }

    public void insertEmployee() {
        boolean isEmpty = true;
        try {
            preStmt = con.prepareStatement("insert into staff (id, name, salary) values (?, ?, ?)");
            for (JTextField leftTextField : leftTextFields)
                isEmpty = leftTextField.getText().isEmpty();

            if (!isEmpty){
                preStmt.setInt(1, Integer.parseInt(leftTextFields[0].getText()));
                preStmt.setString(2, leftTextFields[1].getText());
                preStmt.setDouble(3, Double.parseDouble(leftTextFields[2].getText()));
                System.out.println(preStmt.executeUpdate() + " row(s) inserted.");
            }
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }

    public void initMainPanel() {
        panel.removeAll();
        initLeftPanel();
        initRightPanel();
        panel.repaint();
        panel.revalidate();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == leftButtons[0]) {
            boolean isEmpty = true;
            for (JTextField leftTextField : leftTextFields)
                if (leftTextField.getText().isEmpty()) {
                    isEmpty = true;
                    leftTextField.setBorder(BorderFactory.createLineBorder(Color.RED));
                    break;
                } else {
                    leftTextField.setBorder(BorderFactory.createLineBorder(Color.GREEN));
                    isEmpty = false;
                }
           if (!isEmpty){
                insertEmployee();
                alertLabel.setText("Employee Added Successfully");
                initMainPanel();
           }
        }

        if (e.getSource() == leftButtons[1]) {
            for (JTextField leftTextField : leftTextFields)
                leftTextField.setText("");
        }

        if (e.getSource() == leftButtons[2]) {
            String sqlQuery = "UPDATE staff SET name = '" + leftTextFields[1].getText() + "', salary = '" + leftTextFields[2].getText() + "' WHERE id = " + leftTextFields[0].getText();
            try {
                preStmt = con.prepareStatement(sqlQuery);
                System.out.println(preStmt.executeUpdate() + " row(s) inserted.");
                alertLabel.setText("Update Successfully");
            } catch(SQLException ex) {
                System.out.println(ex.getMessage());
            }
            initMainPanel();
        }
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        for (int i = 0 ; i < leftTextFields.length ; i++) {
            leftTextFields[i].setText(tableModel.getValueAt(table.getSelectedRow(), i).toString());
        }
    }

    @Override
    public void mousePressed(MouseEvent e) {}

    @Override
    public void mouseReleased(MouseEvent e) {}

    @Override
    public void mouseEntered(MouseEvent e) {}

    @Override
    public void mouseExited(MouseEvent e) {}

}

class Employee {
    public static String name;
    public static int id;
    public static double salary;
}

public class Program_11 {
    public static void main(String[] args) {
        new JDBCConnectivity();
    }
}