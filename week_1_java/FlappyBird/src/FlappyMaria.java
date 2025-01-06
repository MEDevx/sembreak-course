import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Random;
import javax.swing.*;

public class FlappyMaria extends JPanel implements ActionListener, KeyListener {
  int boardWidth = 360;
  int boardHeight = 640;

  // Images
  Image backgroundImg;
  Image mariaImg;
  Image topPipeImg;
  Image bottomPipeImg;

  // Maria
  int mariaX = boardWidth / 8;
  int mariaY = boardHeight / 2;
  int mariaWidth = 40;
  int mariaHeight = 40;

  class Maria {
    int x = mariaX;
    int y = mariaY;
    int width = mariaWidth;
    int height = mariaHeight;
    Image img;

    Maria(Image img) {
      this.img = img;
    }
  }

  // Pipes
  int pipeX = boardWidth;
  int pipeY = 0;
  int pipeWidth = 64;
  int pipeHeight = 512;

  class Pipe {
    int x = pipeX;
    int y = pipeY;
    int width = pipeWidth;
    int height = pipeHeight;
    Image img;
    boolean passed = false;

    Pipe(Image img) {
      this.img = img;
    }

  }

  // Game logic
  Maria maria;
  int velocityX = -4; // Pipe movement to left
  int velocityY = 0; // Maria up and down movement
  int gravity = 1;

  ArrayList<Pipe> pipes;
  Random random = new Random();

  Timer gameLoop;
  Timer placePipesTimer;
  boolean gameOver = false;
  double score = 0;

  FlappyMaria() {

    // Game board
    setPreferredSize(new Dimension(boardWidth, boardHeight));
    setFocusable(true);
    addKeyListener(this);

    // Load images
    backgroundImg = new ImageIcon(getClass().getResource("./flappybirdbg.png")).getImage();
    mariaImg = new ImageIcon(getClass().getResource("./maria.png")).getImage();
    topPipeImg = new ImageIcon(getClass().getResource("./toppipe.png")).getImage();
    bottomPipeImg = new ImageIcon(getClass().getResource("./bottompipe.png")).getImage();

    // Initialize maria
    maria = new Maria(mariaImg);
    pipes = new ArrayList<Pipe>();

    // Place pipes timer
    placePipesTimer = new Timer(1500, new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        placePipes();
      }
    });
    placePipesTimer.start();

    // Game timer
    gameLoop = new Timer(1000 / 60, this); // 60 times per 1000 milliseconds
    gameLoop.start();

  }

  public void placePipes() {

    int randomPipeY = (int) (pipeY - pipeHeight / 4 - Math.random() * (pipeHeight / 2));
    int openingSpace = boardHeight / 4;

    Pipe topPipe = new Pipe(topPipeImg);
    topPipe.y = randomPipeY;
    pipes.add(topPipe);

    Pipe bottomPipe = new Pipe(bottomPipeImg);
    bottomPipe.y = topPipe.y + openingSpace + pipeHeight;
    pipes.add(bottomPipe);
  }

  public void paintComponent(Graphics g) {
    super.paintComponent(g);
    draw(g);

  }

  public void draw(Graphics g) {

    // Background
    g.drawImage(backgroundImg, 0, 0, boardWidth, boardHeight, null);

    // Maria
    g.drawImage(maria.img, maria.x, maria.y, maria.width, maria.height, null);

    // Pipes
    for (int i = 0; i < pipes.size(); i++) {
      Pipe pipe = pipes.get(i);
      g.drawImage(pipe.img, pipe.x, pipe.y, pipe.width, pipe.height, null);
    }

    // Score
    g.setColor(Color.white);
    g.setFont(new Font("Press Start 2P", Font.PLAIN, 18));
    if (gameOver) {
      g.drawString("Game Over: " + String.valueOf((int) score), 10, 35);
    } else {
      g.drawString(String.valueOf((int) score), 10, 30);
    }

  }

  public void move() {
    // Move maria
    velocityY += gravity;
    maria.y += velocityY;
    maria.y = Math.max(maria.y, 0);

    // Move pipes
    for (int i = 0; i < pipes.size(); i++) {
      Pipe pipe = pipes.get(i);
      pipe.x += velocityX;

      if (!pipe.passed && maria.x > pipe.x + pipe.width) {
        pipe.passed = true;
        score += 0.5;
      }

      if (collision(maria, pipe)) {
        gameOver = true;
      }

    }

    if (maria.y > boardHeight) {
      gameOver = true;
    }

  }

  public boolean collision(Maria a, Pipe b) {
    return a.x < b.x + b.width &&
        a.x + a.width > b.x &&
        a.y < b.y + b.height &&
        a.y + a.height > b.y;
  }

  @Override
  public void actionPerformed(ActionEvent e) {
    move();
    repaint();
    if (gameOver) {
      placePipesTimer.stop();
      gameLoop.stop();
    }

  }

  @Override
  public void keyPressed(KeyEvent e) {
    if (e.getKeyCode() == KeyEvent.VK_SPACE) {
      velocityY = -9;
      if (gameOver) {
        // Game restart after game over
        maria.y = mariaY;
        velocityY = 0;
        pipes.clear();
        score = 0;
        gameOver = false;
        gameLoop.start();
        placePipesTimer.start();
      }
    }

  }

  @Override
  public void keyTyped(KeyEvent e) {
  }

  @Override
  public void keyReleased(KeyEvent e) {

  }

}
