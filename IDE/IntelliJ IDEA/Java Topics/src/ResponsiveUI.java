import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

public class ResponsiveUI implements MouseListener, MouseMotionListener {
    Point initialClick;
    JFrame frame;
    JPanel panel;
    JPanel min, max, close;
    public ResponsiveUI() {
        frame = new JFrame("Responsive UI");
        frame.setSize(400,400);
        frame.setLocationRelativeTo(null);
        frame.setUndecorated(true);

        panel = new JPanel(null);
        panel.setBackground(Color.BLUE);
        panel.addMouseListener(this);
        panel.addMouseMotionListener(this);

        max = new JPanel(null);
        max.setBackground(Color.CYAN);
        max.setBounds(50,0,30,30);
        max.addMouseListener(this);


        panel.add(max);

        panel.setPreferredSize(new Dimension(frame.getWidth(), 30));
        frame.add(panel, BorderLayout.NORTH);
        frame.setVisible(true);
    }
    @Override
    public void mouseClicked(MouseEvent e) {
        initialClick = e.getPoint();
        if (e.getSource() == max) {
            frame.dispose();
        }
    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {

    }

    @Override
    public void mouseEntered(MouseEvent e) {

    }

    @Override
    public void mouseExited(MouseEvent e) {

    }

    @Override
    public void mouseDragged(MouseEvent e) {
        int deltaX = e.getX() - initialClick.x;
        int deltaY = e.getY() - initialClick.y;
        frame.setLocation(frame.getLocation().x + deltaX, frame.getLocation().y + deltaY);
    }

    @Override
    public void mouseMoved(MouseEvent e) {

    }

    public static void main(String[] args) {
        try {
            new ResponsiveUI();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
