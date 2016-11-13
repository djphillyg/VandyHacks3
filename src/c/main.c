#include <pebble.h>

Window *window;

TextLayer *text_layer;

void window_load(Window *window)
{
  text_layer = text_layer_create(GRect(0,0,144,168));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlack);
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  text_layer_set_text(text_layer, "Time for a reality check!");
}

void window_unload(Window *window) 
{
  text_layer_destroy(text_layer);
}

void init() 
{
  //initialize app elements 
  window = window_create();
  window_set_window_handlers(window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload,
  });
  window_stack_push(window, true);
}

void deinit() 
{
  //deinitialize app elements
  window_destroy(window);
}

int main(void) 
{
  init();
  app_event_loop();
  deinit();
}






