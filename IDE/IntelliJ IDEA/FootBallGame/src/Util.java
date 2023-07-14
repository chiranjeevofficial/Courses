import javax.swing.*;
import java.awt.*;

public class Util {
    public static JFrame setMainFrame(String title, Dimension d, LayoutStyle layoutStyle) {
        JFrame frame = new JFrame(title);
        frame.setLayout(layoutStyle);
    }
}
