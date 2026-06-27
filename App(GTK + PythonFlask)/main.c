#include <gtk/gkt.h>
#include <stdlib.h>
#include <stdio.h>
#include "second_file.h"

void start_webserver_python() {
    printf("Starting...");
    system("python server.py");
}

void btn1_callback() {
    GtkWidget *window2 = gtk_new_window();
    gtk_new_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_new_window_set_title(GTK_WINDOW(window), "Second Window!");

    GtkWidget *text3 = gtk_new_label("Choice button :");
    g_container_add(GTK_CONTAINER(window), text3);

    GtkWidget *btn3 = gtk_new_button_with_label("Start WebServer");
    g_container_add(GTK_CONTAINER(window), btn3);

    g_signal_connect(btn3, "clicked", G_CALLBACK(start_webserver_python))

    gtk_widget_show_all(window2);
    gtk_main();
}

void btn2_callback() {
    printf("Bye!");
    exit(0);
}

void btn3_callback() {
    window_about();
}

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_new_window(GTK_TOPLEVEL);
    gtk_new_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_new_window_set_title(GTK_WINDOW(window), "Window");

    GtkWidget *text = gtk_new_label("Welcome!");
    g_container_add(GTK_CONTAINER(window), text);
    
    GtkWidget *text2 = gtk_new_label("Choice button :");
    g_container_add(GTK_CONTAINER(window), text2);

    GtkWidget *btn1 = gtk_new_button_with_label("Start");
    g_container_add(GTK_CONTAINER(window), btn1);

    GtkWidget *btn2 = gtk_new_button_with_label("Exit");
    g_container_add(GTK_CONTAINER(window), btn2);

    GtkWidget *btn3 = gtk_new_button_with_label("About");
    g_container_add(GTK_CONTAINER(window), btn3);

    g_signal_connect(btn1, "clicked", G_CALLBACK(btn1_callback));
    g_signal_connect(btn2, "clicked", G_CALLBACK(btn2_callback));
    g_signal_connect(btn3, "clicked", G_CALLBACK(btn3_callback));

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
