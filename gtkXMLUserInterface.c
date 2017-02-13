#include <gtk/gtk.h>
#include <gtk-3.0/gtk/gtktypes.h>
#include <glib-2.0/glib/gmessages.h>
#include <glib-2.0/gobject/gobject.h>
#include <gtk-3.0/gtk/gtkmain.h>
#include <gtk-3.0/gtk/gtkbuilder.h>
#include <stddef.h>

static void printHello(GtkWidget *widget, gpointer data) {
    g_print("Hello!\n");
}

int main(int argc, char** argv) {
    GtkBuilder *builder;
    GObject *window;
    GObject *button;
    
    gtk_init(&argc, &argv);
    
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "builder.ui", NULL);
    
    
    return 0;
}

