import java.io.IOException;
import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;

public class App {
    public static void main(String[] args) throws Exception {
        int boardWidth = 360;
        int boardHeight = 640;

        JFrame frame = new JFrame("Flappy Maria");
        frame.setVisible(true);
        frame.setSize(boardWidth, boardHeight);
        frame.setLocationRelativeTo(null);
        frame.setResizable(false);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        try {
            Image icon = ImageIO.read(App.class.getResource("./maria.png"));
            frame.setIconImage(icon);
        } catch (IOException e) {
            System.out.println("Icon not found: " + e.getMessage());
        }

        FlappyMaria flappyMaria = new FlappyMaria();
        frame.add(flappyMaria);
        frame.pack();
        flappyMaria.requestFocus();
        frame.setVisible(true);

    }
}
