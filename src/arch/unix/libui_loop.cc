#include <gdk/gdk.h>
#include <gtk/gtk.h>

int uiLoopWakeup() { g_main_context_wakeup(NULL); }

int uiEventsPending() { return gtk_events_pending(); }