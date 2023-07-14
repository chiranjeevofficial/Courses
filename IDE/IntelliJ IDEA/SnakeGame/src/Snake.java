import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;

public class Snake {
    JFrame frame;
    JPanel playgroundPanel, statsPanel;
    public Snake() {
        initMainFrame();
        initMainPanel();
    }

    public void initMainFrame() {
        frame = new JFrame("Snake");
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setSize(500,500);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void initMainPanel() {
        playgroundPanel = new JPanel(null);
        statsPanel = new JPanel();
        statsPanel.setLayout(new BoxLayout(statsPanel,BoxLayout.X_AXIS));
        JPanel[] innerStatsPanel = new JPanel[2];
        JLabel[] scoreLabel = new JLabel[2];
        String[] scoreLabelString = {"Current Score", "Highest Score"};

        for (int i = 0 ; i < innerStatsPanel.length ; i++) {
            innerStatsPanel[i] = new JPanel(new GridLayout(1,1));
            scoreLabel[i] = new JLabel(scoreLabelString[i]);
            scoreLabel[i].setBorder(new EmptyBorder(3,10,0,0));
            scoreLabel[i].setFont(new Font("Comic Sans MS",Font.BOLD,17));
            innerStatsPanel[i].add(scoreLabel[i]);
            statsPanel.add(innerStatsPanel[i]);
        }

        innerStatsPanel[0].setBackground(Color.YELLOW);
        innerStatsPanel[1].setBackground(Color.GREEN);

        statsPanel.setBounds(0,0,484,50);
        statsPanel.setBackground(Color.BLUE);
        frame.add(statsPanel);

        playgroundPanel.setBackground(Color.RED);
        playgroundPanel.setBounds(0,54,484,411);
        frame.add(playgroundPanel);
    }
}
