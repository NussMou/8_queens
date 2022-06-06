#include "global.h"

const int WIDTH = 760;
const int HEIGHT = 950;
const double FPS = 60.0;

ALLEGRO_EVENT_QUEUE *scene_queue = NULL;
ALLEGRO_DISPLAY *scene_display = NULL;
ALLEGRO_TIMER *scene_timer = NULL;

int key_left = ALLEGRO_KEY_LEFT;
int key_right = ALLEGRO_KEY_RIGHT;
int key_up = ALLEGRO_KEY_UP;
int key_down = ALLEGRO_KEY_DOWN;
