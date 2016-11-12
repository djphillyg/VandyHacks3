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
  if (launch_reason() == APP_LAUNCH_WAKEUP) {
    //app was started by wakeup
    // Let the timestamp be 2 hours from now
    time_t future_timestamp = time(NULL) + (2 * 60 * SECONDS_PER_MINUTE);

    // Choose a 'cookie' value representing the reason for the wakeup
    const int cookie = 0;

    // If true, the user will be notified if they missed the wakeup 
    // (i.e. their watch was off)
    const bool notify_if_missed = true;

    // Schedule wakeup event
    WakeupId id = wakeup_schedule(future_timestamp, cookie, notify_if_missed);

    // Check the scheduling was successful
    if(id >= 0) {
      // Persist the ID so that a future launch can query it
      const int wakeup_id_key = 43;
      persist_write_int(wakeup_id_key, id);
    }
    window = window_create();
    window_set_window_handlers(window, (WindowHandlers) {
      .load = window_load,
      .unload = window_unload,
    });
    window_stack_push(window, true); 
  } else {
    
  }
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






