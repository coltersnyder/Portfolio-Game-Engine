This software is provided AS IS and includes no warrenty as applicable by law. Any use or adaptation by the user is at full liability and discrestion of the user.

To initialize this game engine:
1.) Create a new window by using: <Window variable name here> = createWindow(string title, int initial position x, int initial position y, int width, int height, UINT32 flags); This will return an SDL_Window*
2.) Create a new renderer by using: <Renderer variable name here> = createRenderer(SDL_Window* window, UINT32 flags); This will return an SDL_Renderer*

To create sprites:
1.) Create a new Sprite Manager by using: SpriteManager <Name of Sprite Manager here>;
2.) Add a new sprite by using: <Name of Sprite Manager>.addSprite(string file location, SDL_Renderer* renderer, string name of sprite);