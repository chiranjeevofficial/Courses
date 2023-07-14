import javax.swing.*;
import java.awt.*;

public class MyJPanel {
    public static void main(String[] args) {
        JFrame frame = new JFrame("JPanel Testing");
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        JPanel[] innerPanel = new JPanel[5];
        String[] colorString = {"A52A2A", "9F8170", "F5F5DC", "3D2B1F", "3D0C02"};
        for (int i = 0 ; i < innerPanel.length ; i++) {
            innerPanel[i] = new JPanel(new GridLayout(1,1));
            innerPanel[i].setPreferredSize(new Dimension(300, 200));
            innerPanel[i].setBackground(getColor(colorString[i]));
            panel.add(innerPanel[i]);
        }

        panel.setBackground(Color.ORANGE);
        frame.add(panel);

        frame.setSize(500,700);
        frame.setLayout(new GridLayout(1,1));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLocationRelativeTo(null);
    }

    public static Color getColor(String hexValue) {
        return new Color(Integer.parseInt(hexValue, 16));
    }

}
