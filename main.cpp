#pragma once
#include"chess.h"
using namespace sf;
using namespace std;
int main()
{
	
	//piece_move_buffer.loadFromFile("graphics\\piece_move.wav");
	//piece_move.setVolume(100);
	//piece_move.setBuffer(piece_move_buffer);
	RenderWindow window(VideoMode(800, 600), "Chess_Esnegaaaa");
	Sprite main_menu;
	Texture main_menu_image;
	main_menu_image.loadFromFile("3d-chess-unlimited-board.png");
	main_menu.setTexture(main_menu_image);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) window.close();
		/*	if (event.type == event.MouseButtonPressed)
			{

				 if (event.mouseButton.y > 1 && event.mouseButton.x > 1 && event.mouseButton.button == Mouse::Left)
				 {*/
					chess_main(window);
					window.create(VideoMode(800, 600), "Chess_Esnegaaaa");
				//}
			//}
		}
		window.clear();
		window.draw(main_menu);
		window.display();
	}
}