#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;


int main()
{

  RenderWindow window(VideoMode(600, 800), "The SFML APP");

  // load image
  Texture t;
  t.loadFromFile("images/background.png");

  // put image to sprite
  Sprite s(t);
  s.setTextureRect(IntRect(0,0, 600, 800));

  
  // main loop
  while (window.isOpen())
  {
    // process input
    Event e;
    while (window.pollEvent(e))
    {
      if (e.type == Event::Closed)
        window.close();
    }

    // draw, display
    window.clear(Color::White);
    window.draw(s);
    window.display();
  }
}     