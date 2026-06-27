#include <gtk/gtk.h>
#include "second_file.h"

void window_about() {
  
  GtkWidget *window2 = gtk_new_window(GTK_TOPLEVEL);
  gtk_window_set_default_size(GTK_WINDOW(window2), 800, 600);
  gtk_window_set_title(GTK_WINDOW(window2), "About Window");

  GtkWidget *text_about = gtk_new_label("This window is empty ");
  g_container_add(GTK_CONTAINER(window2), text_about);

  gtk_widget_show_all(window2);
  return 0;
}
